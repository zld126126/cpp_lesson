#include "Man.h"
#include <iostream>
// ִ�и���Ĺ��췽��
Man::Man(int age):People(age,1)
{
	
}

void Man::sing()
{
	// ִ�и��෽��
	People::sing();
	printf("man sing\n");
}

void Man::sayHello()
{
	printf("man say hello cpp\n");
}
