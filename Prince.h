#pragma once
#include"Gate.h"
#include<vector>

using namespace std;

class Prince
{
private:
	int money;
	int study;
	int power;
	void decreaseState(int mon, int stu, int pow);

public:
	Prince();
	Prince(int mon, int stu, int pow);
	int getMoney();
	int getStudy();
	int getPower();
	void setMoney(int mon);
	void setStudy(int stud);
	void setPower(int pow);
	int savePrincess(vector<Gate*> gates);
	void outputState();
};

