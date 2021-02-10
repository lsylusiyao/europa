/**
 * @file Main.cc
 *
 * @brief Provides an executable for your project which will use a
 * standard Chronological backtracking planner and a StandardAssembly or a PSEngine
 * to encapsulate EUROPA
 */

#include "PSEngine.hh"
#include "NddlInterpreter.hh"
#include <ctime>
 //#include <vld.h>


using namespace EUROPA;
bool solve(const char* plannerConfig, const char* txSource, int startHorizon, int endHorizon, int maxSteps);
void runSolver(PSSolver* solver, int startHorizon, int endHorizon, int maxSteps);
void checkSolver(PSSolver* solver, int i);
void printFlaws(int it, PSList<std::string>& flaws);
#define logMsg(category,msg) { std::cout << category << "::" << msg << std::endl; }
clock_t CCstart, CCfinish;       //time start and end
int finalstep;
int main(int argc, const char** argv)
{
	if (argc < 2)
	{
		std::cout << "Usage: Europa.exe certain_state.nddl" << std::endl;
		return 0;
	}
	const char* txSource = argv[1];
	const char* plannerConfig = "PlannerConfig.xml";

	/*  CCstart=clock(); */               // start timing
	DebugMessage::enableMatchingMsgs("", "NddlInterpreter:interpret");
	solve(
		plannerConfig,
		txSource,
		0,   // startHorizon
		1000, // endHorizon
		1000 // maxSteps
	);

	CCfinish = clock();               // finish timing
	std::cout << "Calculating time: " << CCfinish - CCstart << "/" << CLOCKS_PER_SEC << " (s) " << std::endl;
	std::cout << "Used " << finalstep << " steps for planning" << std::endl;
	return 0;
}

bool solve(const char* plannerConfig,
	const char* txSource,
	int startHorizon,
	int endHorizon,
	int maxSteps)
{
	try {
		PSEngine* engine = PSEngine::makeInstance();
		engine->start();
		engine->executeScript("nddl", txSource, true/*isFile*/);
		CCstart = clock();
		PSSolver* solver = engine->createSolver(plannerConfig);
		runSolver(solver, startHorizon, endHorizon, maxSteps);
		delete solver;
		std::cout << engine->planDatabaseToString() << std::endl;
		delete engine;

		return true;
	}
	catch (Error& e) {
		std::cerr << "PSEngine failed: " << e.getMsg() << std::endl;
		return false;
	}
	catch (PSLanguageExceptionList psl)
	{
		std::cerr << "Language interpret failed: ";
		for (int i = 0;i < psl.getExceptionCount(); i++)
		{
			std::cerr << psl.getException(i);
		}
		std::cerr << std::endl;
	}
	catch (std::exception e)
	{
		std::cerr << "Program failed: " << e.what() << std::endl;
		return false;
	}
}

void printFlaws(int it, PSList<std::string>& flaws)
{
	logMsg("Main", "Iteration:" << it << " " << flaws.size() << " flaws");

	for (int i = 0; i < flaws.size(); i++) {
		logMsg("Main", "    " << (i + 1) << " - " << flaws.get(i));
	}
}

void runSolver(PSSolver* solver, int startHorizon, int endHorizon, int maxSteps)
{
	solver->configure(startHorizon, endHorizon);
	int i;
	for (i = 0;
		!solver->isExhausted() &&
		!solver->isTimedOut() &&
		i < maxSteps;
		i = solver->getStepCount()) {

		solver->step();
		PSList<std::string> flaws;
		if (solver->isConstraintConsistent()) {
			flaws = solver->getFlaws();
			//printFlaws(i,flaws);
			if (flaws.size() == 0)
			{
				finalstep = solver->getStepCount();
				break;
			}

		}
		else
			logMsg("Main", "Iteration " << i << " Solver is not constraint consistent");
	}

	checkSolver(solver, i);
}

void checkSolver(PSSolver* solver, int i)
{
	if (solver->isExhausted()) {
		logMsg("Main", "Solver was exhausted after " << i << " steps");
	}
	else if (solver->isTimedOut()) {
		logMsg("Main", "Solver timed out after " << i << " steps");
	}
	else {
		logMsg("Main", "Solver finished after " << i << " steps");
	}
}

