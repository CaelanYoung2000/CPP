//Lab8-6.cpp - displays a store's quarterly (three month) sales

#include <iostream>
using namespace std;

int main()
{
	int month = 1;
	int sales = 0;
	int totalSales = 0;

	//get an unknown number of sales amounts for each of three months
	while (month < 4)
	{
		cout << "First sales amount for month " << month << " (negative number to end): ";
		cin >> sales;
		while (sales >= 0)
		{
			totalSales += totalSales + sales;
			cout << "Next sales amount for month " << month << " (negative number to end): ";
			cin >> sales;
			month += 1;
		}	//end while
		cout << endl;
	}	//end while

	cout << "Total sales for the store: $" << totalSales << endl;
	return 0;
}	//end of main function
