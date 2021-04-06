#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
	Employee employees[5];

	unsigned short numEmployees;
	cout << "Number of Employees: ";
	cin >> numEmployees;

	for (int i = 0; i < numEmployees; i++) 
	{
		employees[i].Read();
		cout << endl;
	}

	for (int i = 0; i < numEmployees; i++)
	{
		employees[i].Write();
		cout << endl;
	}
}