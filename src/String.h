#pragma once
#include <cstddef>
#include <cstring>

struct String
{
private:
	/** Размер строки */
	size_t size = 0;

	/** Указатель на C-style строку */
	char* str = nullptr;
	
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

	/**
	 * Конструктор создания копии объекта
	 * @param other копируемый объект
	 */
	String(const String& other);

	~String()
	{
		delete[] str;
	}

	/* Возвращает длину строки */
	size_t length() const;
};
