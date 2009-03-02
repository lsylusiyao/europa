/** \file
 *  This C header file was generated by $ANTLR version 3.1.1
 *
 *     -  From the grammar source file : ../base/antlr/NDDL3.g
 *     -                            On : 2009-03-02 08:44:08
 *     -                 for the lexer : NDDL3LexerLexer *
 * Editing it, at least manually, is not wise. 
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The lexer NDDL3Lexer has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 * 
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef pNDDL3Lexer, which is returned from a call to NDDL3LexerNew().
 *
 * As this is a generated lexer, it is unlikely you will call it 'manually'. However
 * the methods are provided anyway.
 * * The methods in pNDDL3Lexer are  as follows:
 *
 *  -  void      pNDDL3Lexer->T__26(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__27(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__28(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__29(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__30(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__31(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__32(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__33(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__34(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__35(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__36(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__37(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__38(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__39(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__40(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__41(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__42(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__43(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__44(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__45(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__46(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__47(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__48(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__49(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__50(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__51(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__52(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__53(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__54(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__55(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__56(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__57(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__58(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__59(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__60(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__61(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__62(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__63(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__64(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__65(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__66(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__67(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__68(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__69(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__70(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__71(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__72(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__73(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__74(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__75(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__76(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__77(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__78(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__79(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__80(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__81(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__82(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__83(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__84(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__85(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__86(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__87(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__88(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__89(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__90(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__91(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__92(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__93(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__94(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__95(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__96(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__97(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__98(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->T__99(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->INCLUDE(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->IDENT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->STRING(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->ESCAPE_SEQUENCE(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->OCTAL_ESC(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->UNICODE_ESC(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->HEX_DIGIT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->DIGIT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->INT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->INT_SUFFIX(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->FLOAT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->EXPONENT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->FLOAT_SUFFIX(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->COMMENT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->LINE_COMMENT(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->WS(pNDDL3Lexer)
 *  -  void      pNDDL3Lexer->Tokens(pNDDL3Lexer)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
#ifndef	_NDDL3Lexer_H
#define _NDDL3Lexer_H
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */
 
#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct NDDL3Lexer_Ctx_struct NDDL3Lexer, * pNDDL3Lexer;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule 
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#endif


/** Context tracking structure for NDDL3Lexer
 */
struct NDDL3Lexer_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_LEXER    pLexer;


     void (*mT__26)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__27)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__28)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__29)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__30)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__31)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__32)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__33)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__34)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__35)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__36)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__37)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__38)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__39)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__40)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__41)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__42)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__43)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__44)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__45)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__46)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__47)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__48)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__49)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__50)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__51)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__52)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__53)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__54)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__55)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__56)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__57)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__58)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__59)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__60)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__61)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__62)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__63)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__64)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__65)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__66)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__67)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__68)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__69)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__70)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__71)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__72)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__73)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__74)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__75)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__76)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__77)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__78)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__79)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__80)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__81)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__82)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__83)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__84)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__85)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__86)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__87)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__88)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__89)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__90)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__91)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__92)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__93)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__94)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__95)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__96)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__97)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__98)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mT__99)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mINCLUDE)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mIDENT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mSTRING)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mESCAPE_SEQUENCE)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mOCTAL_ESC)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mUNICODE_ESC)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mHEX_DIGIT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mDIGIT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mINT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mINT_SUFFIX)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mFLOAT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mEXPONENT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mFLOAT_SUFFIX)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mCOMMENT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mLINE_COMMENT)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mWS)	(struct NDDL3Lexer_Ctx_struct * ctx);
     void (*mTokens)	(struct NDDL3Lexer_Ctx_struct * ctx);    const char * (*getGrammarFileName)();
    void	    (*free)   (struct NDDL3Lexer_Ctx_struct * ctx);
        
};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API pNDDL3Lexer NDDL3LexerNew         (pANTLR3_INPUT_STREAM instream);
ANTLR3_API pNDDL3Lexer NDDL3LexerNewSSD      (pANTLR3_INPUT_STREAM instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the lexer will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif 
#define EXPONENT      22
#define T__29      29
#define FLOAT_SUFFIX      23
#define T__28      28
#define T__27      27
#define T__26      26
#define CONSTRUCTOR_INVOCATION      5
#define OCTAL_ESC      18
#define EOF      -1
#define T__93      93
#define T__94      94
#define T__91      91
#define T__92      92
#define T__90      90
#define INCLUDE      15
#define COMMENT      24
#define T__99      99
#define T__98      98
#define T__97      97
#define T__96      96
#define T__95      95
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define LINE_COMMENT      25
#define INT      12
#define T__85      85
#define T__84      84
#define T__87      87
#define T__86      86
#define T__89      89
#define T__88      88
#define WS      14
#define T__71      71
#define T__72      72
#define VARIABLE      9
#define T__70      70
#define T__76      76
#define T__75      75
#define T__74      74
#define T__73      73
#define CONSTRUCTOR      4
#define T__79      79
#define T__78      78
#define T__77      77
#define T__68      68
#define T__69      69
#define T__66      66
#define T__67      67
#define T__64      64
#define T__65      65
#define INT_SUFFIX      21
#define T__62      62
#define T__63      63
#define FLOAT      13
#define TOKEN_RELATION      8
#define T__61      61
#define T__60      60
#define T__55      55
#define T__56      56
#define ESCAPE_SEQUENCE      16
#define T__57      57
#define T__58      58
#define T__51      51
#define T__52      52
#define T__53      53
#define T__54      54
#define T__59      59
#define IDENT      10
#define DIGIT      20
#define T__50      50
#define T__42      42
#define T__43      43
#define T__40      40
#define T__41      41
#define T__46      46
#define T__47      47
#define T__44      44
#define T__45      45
#define T__48      48
#define T__49      49
#define UNICODE_ESC      17
#define HEX_DIGIT      19
#define T__30      30
#define T__31      31
#define T__32      32
#define T__33      33
#define T__34      34
#define T__35      35
#define T__36      36
#define T__37      37
#define NDDL      7
#define T__38      38
#define T__39      39
#define CONSTRAINT_INSTANTIATION      6
#define STRING      11
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for NDDL3Lexer
 * =============================================================================
 */
/** \} */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
