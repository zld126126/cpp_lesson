#include "People.h"
#include <iostream>

// Ĭ�Ϲ��췽��
People::People()
{
	this->age = 10;
	this->sex = 2;
}

// �вι��췽��
People::People(int age, int sex)
{
	this->age = age;
	this->sex = sex;
}

int People::getAge()
{
	return this->age;
}

int People::getSex()
{
	return this->sex;
}

void People::sayHello() {
	printf("Hello Cpp\n");
}
