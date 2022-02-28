// Lab6-12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{

	int deptCode = 0;

	int salary = 0;

	std::cout << "Department code (1, 2, or 3) : ";
	std::cin >> deptCode;

	if (deptCode == 1 || deptCode == 2 || deptCode == 3) {

		switch (deptCode)
		{
		case 1:
			salary = 25000;
			break;
		case 2:
			salary = 30000;
			break;
		case 3:
			salary = 32000;
			break;
		}	//end switch

		std::cout << "Salary: $" << salary << endl;

	}
	else {

		std::cout << "Invalid code";

	}


}