// Lab8-14 project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <string>

using namespace std;

int main() {

	cout << "Row and Column Data." << endl;

	int matrix[4][5];

	for (int i = 1; i <= 4; i++)

	{

		for (int j = 1; j <= 5; j++)
		{

			matrix[i][j] = i * j;

			cout << matrix[i][j] << " ";

		}


	}

	cout << endl;

	return(0);
} //end of main function