#pragma once
#include <cstddef>
#include <cstring>

struct String
{
private:
	size_t size = 0; // размер строки
	char* str = nullptr; // указатель на начало строки в памяти
	
public:
	explicit String(const char* str = "");

	String(size_t n, char c);

	~String()
	{
		delete[] str;
	}
};
