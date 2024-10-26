/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		PersonalInfo.h
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Creates a PersonalInfo Class.
Input:			Data values from user via set functions.
Output:			Data values from user via get functions.
Exceptions:		None.
*/
#pragma once
#ifndef PERSONALINFO_H
#define PERSONALINFO_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class PersonalInfo 
{
private:
	// Member Variables
	vector <string> firstName;
	vector <string> lastName;
	vector <int> age;
	vector <string> streetAddress;
	vector <string> city;
	vector <string> state;
	vector <string> phoneNumber;

public:
	// Set Functions
	void setFName(string firstIn);
	void setLName(string lastIn);
	void setAge(int ageIn);
	void setPhone(string phoneIn);

	// Get Functions
	string getFName(int i);
	string getLName(int i);
	int getAge(int i);
	string getPhone(int i);

};

#endif // !PERSONALINFO_H
