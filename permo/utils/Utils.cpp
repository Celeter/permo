#include "stdafx.h"
#include "Utils.h"


Utils::Utils()
{
}


Utils::~Utils()
{
}

void Utils::AnsiToUtf16(const char * ansi, wchar_t * utf16, size_t size)
{
	MultiByteToWideChar(CP_UTF8, 0, ansi, -1, utf16, size);
}
