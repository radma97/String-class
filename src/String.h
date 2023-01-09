#pragma once
#include <iostream>

struct String
{
private:
	size_t size; // размер строки
	char* str; // указатель на начало строки в памяти
	
public:
	explicit String(const char* str = "")
	{
	}

	~String()
	{
	}
};
