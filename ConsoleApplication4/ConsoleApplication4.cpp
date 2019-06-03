// ConsoleApplication4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class Cfeet
{
private:
	int feet;
	int inch;
	int check();
public:
	Cfeet();
	int setfeet(int f, int i);
	void addfeet();
	void display();
	Cfeet operator+(Cfeet&otemp);
};
Cfeet::Cfeet()
{
	feet = 0;
	inch = 0;
}
Cfeet Cfeet::operator+(Cfeet &ob)
{
	Cfeet temp;
	temp.setfeet(feet + ob.feet, inch + ob.inch);
	return temp;
}
int Cfeet::setfeet(int f, int i)
{
	feet = f;
	inch = i;
	check();
	return 0;
}
int Cfeet::check()
{
	int feet = 1;
	if (inch >= 12)
	{
		feet = feet + inch / 12;
		inch = inch % 12;
	}
	return 0;
}
void Cfeet::addfeet()
{
	if (inch >= 12)
	{
		feet = feet + inch / 12;
		inch = inch % 12;
	}
}
void Cfeet::display()
{
	cout << "feet=" << feet << " inch=" << inch << endl;
}
int main()
{
	Cfeet ob1, ob2, ob3;
	ob1.setfeet(1, 25);
	ob2.setfeet(1, 25);
	ob3 = ob1 + ob2;
	ob3.display();
	return 0;
}