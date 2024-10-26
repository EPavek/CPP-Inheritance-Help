/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		PersonalInfo.cpp
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Summer Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Structures the PersonalInfo class functions.
Input:			Various user input.
Output:			Verified user input.
Exceptions:		None.
*/
#include "PersonalInfo.h"
#include <iostream>
#include <vector>

using namespace std;

// Set Functions
void PersonalInfo::setFName(string firstIn)
{
	firstName.push_back(firstIn);
}
void PersonalInfo::setLName(string lastIn)
{
	lastName.push_back(lastIn);
}
void PersonalInfo::setAge(int ageIn)
{
	age.push_back(ageIn);
}
void PersonalInfo::setPhone(string phoneIn)
{
	phoneNumber.push_back(phoneIn);
}

// Get Functions
string PersonalInfo::getFName(int i)
{
	return firstName.at(i);
}
string PersonalInfo::getLName(int i)
{
	return lastName.at(i);
}
int PersonalInfo::getAge(int i)
{
	return age.at(i);
}
string PersonalInfo::getPhone(int i)
{
	return phoneNumber.at(i);
}
