// ModifyThis19.cpp - Converts American Dollars To Mexican Pesos
//Created/revised by Caelan Young on 04/10/2020

#include <iostream>

using namespace std;

int main()
{
	std::cout << "\Please enter how many American dollars you would like to convert to Mexican pesos       ";


	int createNum;

	std::cin >> createNum;

	std::cout << "You entered " << createNum << " American dollars, this converts to " << createNum * 15.24 << " Mexican pesos";

}
