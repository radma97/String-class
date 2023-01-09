#pragma once
#include <cstddef>
#include <cstring>

struct String
{
private:
	size_t size = 0; // размер строки
	char* str = nullptr; // указатель на C-style строку
	
public:

	/**
	 * Конструктор для создания объекта на основе существующей C-style строки
	 * @param str указатель на инициализирующую строку
	 */
	explicit String(const char* str = "");

	/**
	 * Конструктор для создания строки, состоящей из нескольких одинаковых символов
	 * @param n количество повторений символа
	 * @param c сам символ
	 */
	String(size_t n, char c);

	~String()
	{
		delete[] str;
	}
};
