#include "Man.h"
#include <iostream>
// ִ�и���Ĺ��췽��
Man::Man(int age):People(age,1)
{
	
}

void Man::sayHello()
{
	// ִ�и��෽��
	People::sayHello();
	printf("man say hello cpp\n");
}
