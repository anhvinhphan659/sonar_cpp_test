#pragma once
#include<string>

class Gate
{
protected:
	int desMon;
	int desStud;
	int desPower;
	std::string name;
public:
	Gate();
	virtual bool isPassed(int& money,int& study,int& power);
	virtual void inputData();
	void outputParam();
	std::string getName();
	int getDesMon();
	int getDesStud();
	int getDesPower();
	
};

class BussinessGate :public Gate
{
public: 
	BussinessGate();
	BussinessGate(int mon);
	void inputData();
	bool isPassed(int& money, int& study, int& power);
	void setDesMon(int desmon);
};

class AcademicGate : public Gate
{
public:
	AcademicGate();
	AcademicGate(int stu);
	void inputData();
	bool isPassed(int& money, int& study, int& power);
	void setDesStud(int desstud);
};

class PowerGate : public Gate
{
public:
	PowerGate();
	PowerGate(int pow);
	void inputData();
	bool isPassed(int& money, int& study, int& power);
	void setDesPower(int despow);
};

