#pragma once
#include <iostream>
#include <string>
using namespace std;

class Pupil
{
protected:
	string school;
	string name;
	int age;
	void SetSchool();
	void OutData();
	void OutAge();
	void ChangeName();
	void ChangeAge();
public:
	Pupil();
	Pupil(string, int, string);
	virtual void Interface();
};

class Journal : protected Pupil
{
public:
	virtual void Interface();
	Journal();
	~Journal();
private:
	int nm;
	int *mark = new int[nm];
	void WatchMarks();
};