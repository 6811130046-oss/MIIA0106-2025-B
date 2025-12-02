// LAB301.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main(void) {
	string  ID, name, Score;
	int score;

	cout << "Enter student ID: ";
	cin >> ID;

	cout << "Enter student name: ";
	cin >> name;

	cout << "Enter score: ";
	cin >> score;

	if (score >= 90 && score <= 100)
	{
		cout << score;
		cout << "Grade : A";
	}
	if (score >= 80 && score <= 89)
	{
		cout << score;
		cout << "Grade : B";
	}
	if (score >= 70 && score <= 79)
	{
		cout << score;
		cout << "Grade : C";
	}
	if (score >= 60 && score <= 69)
	{
		cout << score;
		cout << "Grade : D";
	}
	if (score >= 59 && score <= 0)
	{
		cout << score;
		cout << "Frade : F";
	}	

	return 0;
}
	