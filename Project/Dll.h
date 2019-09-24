#pragma once

#ifdef TTRCNLIB_EXPORTS  
#define TTRCNLIB_API __declspec(dllexport)   
#else  
#define TTRCNLIB_API __declspec(dllimport)   
#endif