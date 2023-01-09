#include "String.h"

String:: String(const char* str)
{
	size = strlen(str);

	this->str = new char[size + 1];
	strcpy_s(this->str, size + 1, str);
}

String::String(size_t n, char c)
{
	size = n;

	this->str = new char[size + 1];
	for (int i = 0; i < static_cast<int>(size); ++i)
	{
		this->str[i] = c;
	}
	this->str[size] = '\0';
}
