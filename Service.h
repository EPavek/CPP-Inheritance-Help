/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Service.h
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Creates a Service Class.
Input:			Data values from user via set functions.
Output:			Data values from user via get functions.
Exceptions:		None.
*/
#pragma once
#ifndef SERVICE_H
#define SERVICE_H
#include <iostream>
#include <vector>
#include <string>	
#include "Employer.h"

using namespace std;

class Service : public Employer
{
private:
	string type = "Service";
};

#endif // !SERVICE_H
