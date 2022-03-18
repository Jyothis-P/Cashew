#pragma once

#ifdef CS_PLATFORM_WINDOWS
	#ifdef CS_BUILD_DLL
		#define CASHEW_API __declspec(dllexport)
	#else
		#define CASHEW_API __declspec(dllimport)
	#endif // CS_BUILD_DLL
#else
	#error Cashew only supports Windows.
#endif // CS_PLATFORM_WINDOWS
