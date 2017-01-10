#ifndef _COMMON
#define _COMMON

#ifdef WIN32
#ifndef DLL_EXPORT
#define DLL_EXPORT __declspec(dllexport)
#endif
#endif

class DLL_EXPORT cVisualizationHelper
{
public:
	static void foo();
};

#endif