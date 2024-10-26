/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		Person.cpp
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Summer Quarter Term 1
Due Date:		October 26, 2024
Purpose:		Structures the Person class functions.
Input:			Various user input.
Output:			Verified user input.
Exceptions:		None.
*/
#include "Person.h"
#include <iostream>
#include <vector>

using namespace std;

// Set Functions
void Person::newPerson()
{
	string firstIn;
	cout << "Enter First Name: ";
	cin >> firstIn;
	cout << endl;

	string lastIn;
	cout << "Enter Last Name: ";
	cin >> lastIn;
	cout << endl;

	int ageIn;
	while (true)
	{
		cout << "Enter Age: ";
		cin >> ageIn;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid entry. Please try again \n" << endl;
		}
		else
		{
			cout << endl;
			break;
		}
	}

	string phoneIn;
	while (true)
	{
		cout << "Enter Phone Number (000-000-0000): ";
		cin >> phoneIn;
		if (phoneIn.length() != 12 || phoneIn.at(3) != '-' || phoneIn.at(7) != '-')
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid entry. Please try again \n" << endl;
		}
		else
		{
			cout << endl;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			break;
		}
	}
	
	string eName;
	cout << "Enter Employer Name: ";
	getline(cin, eName);
	cout << endl;

	string ePhone;
	while (true)
	{
		cout << "Enter Employer Phone Number (000-000-0000): ";
		cin >> ePhone;
		if (ePhone.length() != 12 || ePhone.at(3) != '-' || ePhone.at(7) != '-')
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid entry. Please try again \n" << endl;
		}
		else
		{
			cout << endl;
			break;
		}
	}

	int eSelection;
	while (true)
	{
		cout << "What type of employer does this person have?" << endl;
		cout << "1. Manufacturing \n2. Sales \n3. Service \n" << endl;
		cin >> eSelection;
		if (cin.fail() || eSelection > 3 || eSelection < 1)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid entry. Please try again \n" << endl;
		}
		else break;
	}

	int dIndexIn = recordIndex + 1;

	switch (eSelection)
	{
		case 1:
		{
			manufacturing1.setName(eName);
			manufacturing1.setPhone(ePhone);
			manufacturing1.setDirectoryIndex(dIndexIn);
			break;
		}
		case 2:
		{
			sales1.setName(eName);
			sales1.setPhone(ePhone);
			sales1.setDirectoryIndex(dIndexIn);
			break;
		}
		case 3:
		{
			service1.setName(eName);
			service1.setPhone(ePhone);
			service1.setDirectoryIndex(dIndexIn);
			break;
		}
	}
	
	personalInfo1.setFName(firstIn);
	personalInfo1.setLName(lastIn);
	personalInfo1.setAge(ageIn);
	personalInfo1.setPhone(phoneIn);

	recordID.push_back((recordIndex + 1));
	recordIndex++;
	cout << "New Entry Complete" << endl;
}


// Get Functions
void Person::getPersonalInfo()
{
	if (Person::recordIndex >= 1)
		for (int i = 0; i < recordIndex; i++)
		{
			cout << recordID.at(i) << " - " << personalInfo1.getFName(i) << " - " << personalInfo1.getLName(i) << " - "
				<< personalInfo1.getAge(i) << " - " << personalInfo1.getPhone(i);
		}
	else
	{
		cout << "This list is not populated yet." << endl;
	}
	cout << endl;
}

void Person::getByEmployer()
{
	int selection2;
	cout << "What type of employer? \n"
		<< "1. Manufacturing \n2. Sales \n3. Service \n" << endl;
	cin >> selection2;


	switch (selection2)
	{
		case 1:
		{
			for (int i = 0; i < manufacturing1.getRecordIndex(); i++)
			{
				cout << "Employer Name: " << manufacturing1.getName(i)
					<< "\nEmployer Number: " << manufacturing1.getPhone(i)
					<< "\nEmployee Name: " << personalInfo1.getFName(manufacturing1.getDirectoryIndex(i)) << " " << personalInfo1.getLName(manufacturing1.getDirectoryIndex(i))
					<< "\nEmployee Phone Number: " << personalInfo1.getPhone(manufacturing1.getDirectoryIndex(i))
					<< "\nEmployee Age: " << personalInfo1.getAge(manufacturing1.getDirectoryIndex(i)) << "\n" << endl;
			}
			break;
		}

		case 2:
		{
			for (int i = 0; i < sales1.getRecordIndex(); i++)
			{
				cout << "Employer Name: " << sales1.getName(i)
					<< "\nEmployer Number: " << sales1.getPhone(i)
					<< "\nEmployee Name: " << personalInfo1.getFName(sales1.getDirectoryIndex(i)) << " " << personalInfo1.getLName(sales1.getDirectoryIndex(i))
					<< "\nEmployee Phone Number: " << personalInfo1.getPhone(sales1.getDirectoryIndex(i))
					<< "\nEmployee Age: " << personalInfo1.getAge(sales1.getDirectoryIndex(i)) << "\n" << endl;
			}
			break;
		}

		case 3:
		{
			for (int i = 0; i < service1.getRecordIndex(); i++)
			{
				cout << "Employer Name: " << service1.getName(i)
					<< "\nEmployer Number: " << service1.getPhone(i)
					<< "\nEmployee Name: " << personalInfo1.getFName(service1.getDirectoryIndex(i)) << " " << personalInfo1.getLName(service1.getDirectoryIndex(i))
					<< "\nEmployee Phone Number: " << personalInfo1.getPhone(service1.getDirectoryIndex(i))
					<< "\nEmployee Age: " << personalInfo1.getAge(service1.getDirectoryIndex(i)) << "\n" << endl;
			}
			break;
		}
	}
}
