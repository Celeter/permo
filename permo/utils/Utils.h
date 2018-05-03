#pragma once
class Utils
{
public:
	Utils();
	~Utils();

	static void AnsiToUtf16(const char* ansi, wchar_t* utf16, size_t size);
};

