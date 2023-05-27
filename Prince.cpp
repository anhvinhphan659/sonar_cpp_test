#include "Prince.h"
#include<iostream>

using namespace std;

void Prince::decreaseState(int mon, int stu, int pow)
{
	money -= mon;
	study -= stu;
	power -= pow;
}

Prince::Prince()
{
	cout << "Input money of prince: ";
	cin >> money;
	cout << "Input study of prince: ";
	cin >> study;
	cout << "Input power of price: ";
	cin >> power;
}

Prince::Prince(int mon, int stu, int pow)
{
	money = mon;
	study = stu;
	power = pow;
}

int Prince::getMoney()
{
	return money;
}

int Prince::getStudy()
{
	return study;
}

int Prince::getPower()
{
	return power;
}

int Prince::savePrincess(vector<Gate*> gates)
{
	int n = gates.size();
	for (int i = 0; i < n; i++)
	{
		bool passed=gates[i]->isPassed(money, study, power);
		if (passed == false)
		{
			cout << "Price failed at gate " << i << ": " << gates[i]->getName() << endl;
			return i;
		}
	}
	cout << "Congratulation! Prince passed all gates and saved Princess!"<<endl;
	outputState();
	return n;
}

void Prince::setMoney(int mon)
{
	money = mon;
}

void Prince::setStudy(int stud)
{
	study = stud;
}

void Prince::setPower(int pow)
{
	power = pow;
}


void Prince::outputState()
{
	cout << "The state of prince: " << endl;
	cout << "Money: " << money<<endl;
	cout << "Study: " << study<<endl;
	cout << "Power: " << power << endl;
}