#pragma once
#include <iostream>

// ������:����interface java/go
class PersonInterface {
public:
	// ���麯��
	virtual void desc() = 0;
};

class People :public PersonInterface
{
private:
	int age;
	int sex;

public:
	People();
	People(int age, int sex);
	int getAge();
	int getSex();
	void sing();
	// �麯��Ҳ��Ҫʵ��
	virtual void sayHello();
	virtual void eat();
	// PersonInterface���麯������ʵ��
	virtual void desc() {
		printf("People eat\n");
	};
};


