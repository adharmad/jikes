/* src/config.h.  Generated automatically by configure.  */
/* src/config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Defined when bit sizes are int = 32, short = 16, char = 8 */
#define HAVE_32BIT_TYPES 

/* Define if you have the <assert.h> header file. */
#define HAVE_ASSERT_H 1

/* defined if bool is a built-in C++ type */
#define HAVE_BOOL 

/* known to be broken on mingwin beta 20 */
/* #undef HAVE_BROKEN_USHRT_MAX */

/* define if the compiler supports const_cast<> */
#define HAVE_CONST_CAST 

/* Define if you have the <ctype.h> header file. */
#define HAVE_CTYPE_H 1

/* Define if you have the `cygwin_win32_to_posix_path_list' function. */
/* #undef HAVE_CYGWIN_WIN32_TO_POSIX_PATH_LIST */

/* Define if you have the <direct.h> header file. */
/* #undef HAVE_DIRECT_H */

/* Define if you have the <dirent.h> header file. */
#define HAVE_DIRENT_H 1

/* define if the compiler supports dynamic_cast<> */
#define HAVE_DYNAMIC_CAST 

/* Defined when the compiler would generate an error on a call to iconv with a
   non const 2nd argument. This is a known problem on IRIX systems. */
#define HAVE_ERROR_CALL_ICONV_CONST 

/* Defined when the compiler would generate an error on a call to wcslen with
   a non const argument. This is only known to happen on cygwin and mingwin */
/* #undef HAVE_ERROR_CALL_WCSLEN_CONST */

/* compiler will generate an error when discarding a const qualifier */
#define HAVE_ERROR_DISCARD_CONST 

/* define if the compiler supports the explicit keyword */
#define HAVE_EXPLICIT 

/* Define if you have the <float.h> header file. */
#define HAVE_FLOAT_H 1

/* use unix style mkdir(str, S_IRWXU | S_IRWXG | S_IRWXO) */
#define HAVE_GLIBC_MKDIR 

/* known to be broken on Win and OS2 when compiled with ICC */
/* #undef HAVE_ICC_FP_BUGS */

/* Define if you have the <iconv.h> header file. */
#define HAVE_ICONV_H 1

/* Defined when Jikes is built with native floating support */
#define HAVE_IEEE754 1

/* Define Jikes functions in a namespace */
/* #undef HAVE_JIKES_NAMESPACE */

/* use unix style mkdir(str, S_IRWXU) */
/* #undef HAVE_LIBC5_MKDIR */

/* Define if you have the `iconv' library (-liconv). */
#define HAVE_LIBICONV 1

/* Define if you have the `icu-uc' library (-licu-uc). */
/* #undef HAVE_LIBICU_UC */

/* Define if you have the `m' library (-lm). */
/* #undef HAVE_LIBM */

/* Define if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* use mac style mkdir(str,0) from <stat.mac.h> */
/* #undef HAVE_MAC_MKDIR */

/* Define if you have the <math.h> header file. */
#define HAVE_MATH_H 1

/* define if the compiler supports member constants */
#define HAVE_MEMBER_CONSTANTS 

/* Define if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* define if the compiler implements namespaces */
#define HAVE_NAMESPACES 1

/* defined if running on a system with dos style paths */
/* #undef HAVE_PATHNAME_STYLE_DOS */

/* define if the compiler supports reinterpret_cast<> */
#define HAVE_REINTERPRET_CAST 

/* define if the compiler supports Run-Time Type Identification */
/* #undef HAVE_RTTI */

/* define if the compiler supports static_cast<> */
#define HAVE_STATIC_CAST 

/* define if the compiler supports ISO C++ standard library */
#define HAVE_STD 

/* Define if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if you have the <sys/cygwin.h> header file. */
/* #undef HAVE_SYS_CYGWIN_H */

/* Define if you have the <time.h> header file. */
#define HAVE_TIME_H 1

/* Defined when the compiler supports the unsigned long long type */
#define HAVE_UNSIGNED_LONG_LONG 

/* Use visual C++ version of set_new_handler */
/* #undef HAVE_VCPP_SET_NEW_HANDLER */

/* Define if you have the <wchar.h> header file. */
#define HAVE_WCHAR_H 1

/* Define if you have the `wcscat' function. */
#define HAVE_WCSCAT 1

/* Define if you have the `wcscmp' function. */
#define HAVE_WCSCMP 1

/* Define if you have the `wcscpy' function. */
#define HAVE_WCSCPY 1

/* Define if you have the `wcslen' function. */
#define HAVE_WCSLEN 1

/* Define if you have the `wcsncmp' function. */
#define HAVE_WCSNCMP 1

/* Define if you have the `wcsncpy' function. */
#define HAVE_WCSNCPY 1

/* use win32 style mkdir(str) from <direct.h> */
/* #undef HAVE_WIN32_MKDIR */

/* Define if you have the <windows.h> header file. */
/* #undef HAVE_WINDOWS_H */

/* Defined when the wint_t type is supported */
#define HAVE_WINT_T 

/* Used to test results of stat call to see if it is a directory */
#define JIKES_STAT_S_IFDIR S_IFDIR

/* A string to indicate the release of jikes: Version 1.11 1/10/2000 */
#define JIKES_VERSION_STRING "Version 1.13 3/1/2001"

/* Name of package */
#define PACKAGE "jikes"

/* used to seperate elements on the PATH */
#define PATH_SEPARATOR ':'

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* quick hack to use UNIX file system, fixme */
#define UNIX_FILE_SYSTEM 

/* Version number of package */
#define VERSION "1.13"

/* quick hack to use Win32 file system, fixme */
/* #undef WIN32_FILE_SYSTEM */

/* Define if your processor stores words with the most significant byte first
   (like Motorola and SPARC, unlike Intel and VAX). */
/* #undef WORDS_BIGENDIAN */
