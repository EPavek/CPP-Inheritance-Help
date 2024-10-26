/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Employer.cpp
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Summer Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Structures the Employer class functions.
Input:			Various user input.
Output:			Verified user input.
Exceptions:		None.
*/
#include "Employer.h"
#include <iostream>
#include <vector>

using namespace std;

// Set Functions
void Employer::setName(string nameIn)
{
	name.push_back(nameIn);
}
void Employer::setPhone(string ePhone)
{
	phoneNumber.push_back(ePhone);
}
void Employer::setDirectoryIndex(int dIndexIn)
{
	directoryIndex.push_back(dIndexIn);
	recordIndex++;
}

// Get Functions
int Employer::getRecordIndex()
{
	return recordIndex;
}

string Employer::getName(int i)
{
	return name.at(i);
}
string Employer::getPhone(int i)
{
	return phoneNumber.at(i);
}
int Employer::getDirectoryIndex(int i)
{
	return directoryIndex.at(i);
}