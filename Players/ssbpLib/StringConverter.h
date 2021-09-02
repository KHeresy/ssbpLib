#pragma once
#include <string.h>
#include <stdlib.h>

inline const wchar_t* C2WC(const char* str)
{
	const size_t uSize = strlen(str) + 1;
	wchar_t* wStr = new wchar_t[uSize];
	mbstowcs(wStr, str, uSize);

	return wStr;
}
