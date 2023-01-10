#include <iostream>
#include "String.h"


int main()
{
	String s("ABC");
	std::cout << s.length() << std::endl;

	String s2(7, 'A');
	std::cout << s2.length() << std::endl;

	String s2_c = s2;
	std::cout << s2_c.length() << std::endl;

	return 0;
}
