/*
Author:			Evan A. Pavek
Date:			October 26, 2024
FileName:		main.cpp
Instructor:		Professor Issa, Joseph
Class:			COP2350C - Advanced C++ Programming - 2024 Fall Quarter Term 1
Due Date:		October 26, 2024
Purpose:		An address book program.
Input:			Various user inputs.
Output:			Data input by user.
Exceptions:		None.
*/

#include <cstdlib>
#include <iostream>
#include <string>
#include "Person.h"
#include "Sales.h"
#include "Service.h"
#include "Manufacturing.h"

using namespace std;

// Variables
bool createEntry;
Person records;

// Main Program
int main()
{
	while (true)
	{
		// Main Menu
		int selection;
		cout << "Select Menu Option:" << endl;
		cout << "1. Enter New Contact" << endl;
		cout << "2. Display Contacts" << endl;
		cout << "3. End Program" << endl;
		cin >> selection;
		cout << endl;

		// Selections
		switch (selection)
		{
			case 1: // Enter New Contact
			{
				createEntry = true;
				while (createEntry == true)
				{
					// Call Create Person Function
					records.newPerson();

					// Confirm entry and ask user if they are entering any more records
					cout << "Would you like to create a new entry?" << endl;
					cout << "1. Yes" << endl;
					cout << "2. No" << endl;
					try
					{

						int newEntry;
						cin >> newEntry;
						cout << endl;

						// Close While Loop if "No" is selected
						if (newEntry == 2)
						{
							createEntry = false;
							selection = 0;
						}
						else if (newEntry == 1)
						{
							cout << "Starting new entry... \n" << endl;
						}
						else
						{
							throw (newEntry = 2);
						}
					}

					catch (...)
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << "Input error. \n Returning to main menu. \n" << endl;
						createEntry = false;
					}
				}
				break;
			}

			case 2: // List all entries
			{
				records.getByEmployer();

				// Call List Person Function
				

				break;
			}
			case 3: // End Program
			{
				return 0;
			}
			default:
			{

			}
		}
	}
}