#ifndef MATHSLIB_DIVIDER_H
#define MATHSLIB_DIVIDER_H

#ifdef MATHSLIB_EXPORTS
#define MATHSLIB_API __declspec(dllexport)
#else
#define MATHSLIB_API __declspec(dllimport)
#endif

// The above will include one of:
// __declspec(dllexport)
// __declspec(dllimport)
// before declarations. This is a Microsoft specific
// extension to C/C++

MATHSLIB_API int divide(int a, int b);
#endif