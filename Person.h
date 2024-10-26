/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Person.h
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Creates a Person Class.
Input:			Data values from user via set functions.
Output:			Data values from user via get functions.
Exceptions:		None.
*/
#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <vector>
#include "PersonalInfo.h"
#include "Sales.h"
#include "Manufacturing.h"
#include "Service.h"

using namespace std;

// Start Person Class
class Person
{
private:
	int recordIndex = 0;
	vector <int> recordID;
	Manufacturing manufacturing1;
	Sales sales1;
	Service service1;
	PersonalInfo personalInfo1;

public:
	// Set Functions
	void newPerson();

	// Get Functions
	void getPersonalInfo();
	void getByEmployer();
};

#endif // !PERSON_H
