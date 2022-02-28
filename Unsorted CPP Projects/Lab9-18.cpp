// Lab9-18 project.cpp - Displays measurment in inches or centimeters
//Created/revised by Caelan Young on 03/26/2020

#include <iostream>

using namespace std;

int main()
{
	std::cout << "\Please enter any number (this will be stored in feet)        ";


		int createNum;

		std::cin >> createNum;

		std::cout << "\Enter 1 to convert to inches or 2 to convert to centimeters        ";

	int check;

	std::cin >> check;

	//Get user input

	if (check == 1) {


		std::cout << createNum * 12 << " Inches after the conversion";
		
	}

	else if (check == 2) {


		std::cout << createNum * 30.48 << " Centimeters after the conversion";

		
	}

	return 0;

}