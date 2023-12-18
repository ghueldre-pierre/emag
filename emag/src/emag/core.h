#pragma once

#ifdef EMAG_PLATFORM_WINDOWS

#ifdef EMAG_BUILD_DLL
#define EMAG_API __declspec(dllexport)
#else
#define EMAG_API __declspec(dllimport)
#endif

#else
#error EMAG only supports Windows for now ...
#endif