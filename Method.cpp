#include "Header.h"

Pupil::Pupil()
{
	cout << "Please, enter some data..." << endl;
	cout << "Username: ";
	cin >> name;
	cout << "School: ";
	cin >> school;
	cout << "Age: ";
	cin >> age;
}

Pupil::Pupil(string a, int b, string c = "NoName")
{
	name = a;
	age = b;
	school = c;
}

Journal::Journal()
{
	cout << "How many marks pupil has?" << endl;
	cin >> nm;
	cout << "Enter marks here:" << endl;
	for (int i = 0; i < nm; i++) {
		cin >> mark[i];
	}
}


Journal::~Journal()
{
	delete[] mark;
}

void Pupil::Interface()
{
	int a;
	cout << "1 - OutData, 2 - OutAge, 3 - ChangeUsername, 4 - ChangeAge, 5 - ChangeSchool, 0 - Exit" << endl;
	cout << "Code:";
	cin >> a;
	switch (a)
	{
	case 1:
		OutData();
		break;
	case 2:
		OutAge();
		break;
	case 3:
		ChangeName();
		break;
	case 4:
		ChangeAge();
		break;
	case 5:
		SetSchool();
		break;
	default:
		break;
	}
	if (a != 0) Interface();
}

void Journal::Interface()
{
	int a;
	cout << "1 - OutData, 2 - OutAge, 3 - ChangeUsername, 4 - ChangeAge, 5 - ChangeSchool, 6 - Marks, 0 - Exit" << endl;
	cout << "Code:";
	cin >> a;
	switch (a)
	{
	case 1:
		OutData();
		break;
	case 2:
		OutAge();
		break;
	case 3:
		ChangeName();
		break;
	case 4:
		ChangeAge();
		break;
	case 5:
		SetSchool();
		break;
	case 6:
		WatchMarks();
		break;
	default:
		break;
	}
	if (a != 0) Interface();
}

void Pupil::SetSchool()
{
	cout << "New school: ";
	cin >> school;
}

void Pupil::OutData()
{
	cout << "Username: " << name << endl;
	cout << "Shool: " << school << endl;
	cout << "Age: " << age << endl;
}

void Pupil::OutAge()
{
	cout << "Username: " << name << endl;
	cout << "Age: " << age << endl;
}

void Pupil::ChangeName()
{
	cout << "New username: ";
	cin >> name;
}

void Pupil::ChangeAge()
{
	cout << "New age: ";
	cin >> age;
}

void Journal::WatchMarks()
{
	cout << name << " marks:" << endl;
	for (int i = 0; i < nm; i++) {
		cout << mark[i] << endl;
	}
}