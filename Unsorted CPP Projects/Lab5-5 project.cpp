//Lab5-5.cpp - display which sales where higher and lower
//Created/revised by Caelan Young on 02/12/2020

#include <iostream>

#include <string>

using namespace std;

int main()
{
	//declare two employees


	string employee1 = "Mary";

	string employee2 = "Jim";


	double marySales = 0.0;

	double jimSales = 0.0;

	//enter input item

	cout << "How many sales did Mary make?" << endl;

	cin >> marySales;

	cout << "How many sales did Jim make?" << endl;

	cin >> jimSales;


	//Display which sales were higher

	if (marySales > jimSales) {

		cout << "Mary had more sales than Jim" << endl;

		double highSales = marySales;

		double lowSales = jimSales;

		cout << "The highest sales amount is " << highSales << " sales by " << employee1 << endl;

		cout << "The lowest amount is " << lowSales << " sales by " << employee2 << endl;



	}
	else if (marySales == jimSales) {

		cout << "Mary and Jim both had the same amount of sales" << endl;

	}
	else {

		cout << "Jim had more sales than Mary" << endl;

		double highSales = jimSales;

		double lowSales = marySales;

		cout << "The highest sales amount is " << highSales << " sales by " << employee2 << endl;

		cout << "The lowest amount is " << lowSales << " sales by " << employee1<< endl;

	}

}//end of main function