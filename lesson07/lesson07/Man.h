#pragma once
#include "People.h"
#include <iostream>

// �̳�
class Man:public People
{
public:
	Man(int age);
	void sing();

	virtual void sayHello();

	virtual void eat() {
		printf("man eat\n");
	};
	// PersonInterface���麯������ʵ��
	virtual void desc() {
		printf("man eat\n");
	};
};

