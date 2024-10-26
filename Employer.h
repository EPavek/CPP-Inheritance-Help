/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Employer.h
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Creates a Employer Class.
Input:			Data values from user via set functions.
Output:			Data values from user via get functions.
Exceptions:		None.
*/
#pragma once
#ifndef EMPLOYER_H
#define EMPLOYER_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employer
{
protected:
	int recordIndex = 0;
	vector <int> directoryIndex;
	vector <string> name;
	vector <string> phoneNumber;

public:
	// Set Functions
	void setName(string nameIn);
	void setPhone(string ePhone);
	void setDirectoryIndex(int dIndexIn);

	// Get Functions
	int getRecordIndex();
	string getName(int i);
	string getPhone(int i);
	int getDirectoryIndex(int i);
};

#endif // !EMPLOYER_H

