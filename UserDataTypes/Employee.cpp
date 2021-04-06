#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read()
{
	cout << "Enter First Name: ";
	cin >> name;

    cout << "Enter Age: ";
    cin >> age;

    cin.get();
    cout << "Enter Zipcode: ";
    cin >> zipcode;

    cout << "Enter Wage: ";
    cin >> wage;

    cout << "Enter Days Worked This Week: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter Hours Worked For Day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours = hoursWorkedPerDay[i] + totalHours;
    }
    totalEarning = totalHours * wage;
}
void Employee::Write()
{
    cout << "Employee: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Zipcode: " << zipcode << endl;
    cout << "This week, " << name << " worked " << daysWorked << " days for a total of " << totalHours << " hours.\n";
    cout << name << "'s Wage: " << wage << endl;
    cout << "Gross Income: $" << totalEarning << endl;
    cout << "Net Income: $" << totalEarning - (totalEarning * TAX) << endl;
}