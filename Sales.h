/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Sales.h
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Creates a Sales Class.
Input:			Data values from user via set functions.
Output:			Data values from user via get functions.
Exceptions:		None.
*/
#pragma once
#ifndef SALES_H
#define SALES_H
#include <iostream>
#include <vector>
#include <string>	
#include "Employer.h"

using namespace std;

class Sales : public Employer
{
private:
	string type = "Sales";
};

#endif // !SALES_H