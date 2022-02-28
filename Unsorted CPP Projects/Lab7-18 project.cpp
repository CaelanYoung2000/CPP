// Lab7-18 project.cpp - displays the weekly gross pay for any employee
//Created/revised by Caelan Young on 02/10/2020

#include <iostream>
using namespace std;

int main()
{
	std::cout << "\nTotal pay for employee:\n";
	//Get hourly rate

	std::cout << "What is the workers hourly rate?: $";
	double rate;
	std::cin >> rate;
	//Get hours worked

	std::cout << "How many hours were worked?: ";
	double hours;
	std::cin >> hours;

	//calculate pay
	double pay = 0;


	//check for overtime
	if (hours > 40.0)

	{
		//standard rate
		pay += rate * 40;

		//overtime rate
		pay += (rate * 1.5) * (hours - 40);
	}

	else
		pay += rate * hours;

	//results

	if (std::cin.good())

		std::cout << "The total pay for this employee is: $" << pay << "\n" << std::endl;

	return 0;

}