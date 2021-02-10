#ifndef H_Pdlfcn
#define H_Pdlfcn

/**
 * @file   Pdlfcn.hh
 * @author Patrick Daley
 * @date   
 * @brief  These functions provide a wrapper for unix dlopen(), dlsym(), dlclose()
 *         and dlerror() functions. When compiled for MAC OSX, these functions 
 *         emulate the unix dl functions using Apple's API.
 * @ingroup Utils
 */


# ifdef _MSC_VER
/* POSIX says these are implementation-defined.
* To simplify use with Windows API, we treat them the same way.
*/

#define RTLD_LAZY   0
#define RTLD_NOW    0

#define RTLD_GLOBAL (1 << 1)
#define RTLD_LOCAL  (1 << 2)

/* These two were added in The Open Group Base Specifications Issue 6.
* Note: All other RTLD_* flags in any dlfcn.h are not standard compliant.
*/

#define RTLD_DEFAULT    ((void *)0)
#define RTLD_NEXT       ((void *)-1)

#endif // _MSC_VER

namespace EUROPA {

void * p_dlopen(const char *path, int mode);
void * p_dlsym(void * handle, const char * Symbol);
const char * p_dlerror(void);
int p_dlclose(void * handle);
}
#endif
