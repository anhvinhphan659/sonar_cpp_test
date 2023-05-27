#include "Gate.h"
#include<iostream>

using namespace std;

Gate::Gate()
{
	desMon = 0;
	desStud = 0;
	desPower = 0;
}

void Gate::inputData()
{

}

string Gate::getName()
{
	return name;
}

int Gate::getDesMon()
{
	return desMon;
}

int Gate::getDesStud()
{
	return desStud;
}

int Gate::getDesPower()
{
	return desPower;
}

bool Gate::isPassed(int& money,int& study,int& power)
{
	return true;
}

void Gate::outputParam()
{
	cout << "Name of gate: " << name<<endl;
	cout << "Money param: " << desMon<<endl;
	cout << "Study param: " << desStud<<endl;
	cout << "Power param: " << desPower << endl;;
}

BussinessGate::BussinessGate()
{
	name = "Bussiness Gate";
	desMon = 0;
	desStud = 0;
	desPower = 0;
}

BussinessGate::BussinessGate(int mon)
{
	name = "Bussiness Gate";
	desMon = mon;
	desStud = 0;
	desPower = 0;
}

void BussinessGate::setDesMon(int desmon)
{
	desMon = desmon;
}

void BussinessGate::inputData()
{
	int stock;
	int priceUnit;

	cout << "Input the number of buying stock: ";
	cin >> stock;
	cout << "Input price unit of stock: ";
	cin >> priceUnit;
	
	desMon = stock * priceUnit;
	desStud = 0;
	desPower = 0;
}

bool BussinessGate::isPassed(int& money, int& study, int& power)
{
	money -= desMon;
	return (money >= 0);
}

AcademicGate::AcademicGate()
{
	name = "Academic Gate";
	desMon = 0;
	desStud = 0;
	desPower = 0;
}

AcademicGate::AcademicGate(int stu)
{
	name = "Academic Gate";
	desMon = 0;
	desStud = stu;
	desPower = 0;
}

void AcademicGate::inputData()
{
	cout << "Input Study to pass: ";
	cin >> desStud;

	desMon = 0;
	desPower = 0;
}

bool AcademicGate::isPassed(int& money, int& study, int& power)
{
	return study >= desStud;
}

PowerGate::PowerGate()
{
	name = "Power gate";
	desMon = 0;
	desStud = 0;
	desPower = 0;
}

void AcademicGate::setDesStud(int desstud)
{
	desStud = desstud;
}

PowerGate::PowerGate(int pow)
{
	name = "Power gate";
	desMon = 0;
	desStud = 0;
	desPower = pow;
}

void PowerGate::inputData()
{
	cout << "Input power of hero to pass gate: ";
	cin >> desPower;
	desMon = 0;
	desStud = 0;
}

bool PowerGate::isPassed(int& money, int& study, int& power)
{
	power -= desPower;
	return (power>=0);
}

void PowerGate::setDesPower(int despower)
{
	desPower = despower;
}