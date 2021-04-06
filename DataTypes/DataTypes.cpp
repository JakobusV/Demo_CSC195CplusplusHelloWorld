// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    string name;
    char initial;
    unsigned short age;
    bool isAdult;
    unsigned int zipcode;
    float wage;
    unsigned int daysWorked;
    unsigned short hoursWorkedPerDay[7];
    unsigned short totalHours = 0;
    float totalEarning = 0;
    static unsigned char const DAYS_IN_WEEK = 7;
    float const TAX = 0.1f;

    cout << "Enter First Name: ";
    cin >> name;

    cout << "Enter Last Name Initial: ";
    cin >> initial;

    cout << "Enter Age: ";
    cin >> age;

    isAdult = (age > 17) ? true : false;

    cin.get();
    cout << "Enter Zipcode: ";
    cin >> zipcode;

    cout << "Enter Wage: ";
    cin >> wage;

    cout << "Enter Days Worked: ";
    cin >> daysWorked;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter Hours Worked For Day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHours = hoursWorkedPerDay[i] + totalHours;
    }
    cout << name << " worked " << totalHours << " hours at $" << wage << " an hour." << endl;

    totalEarning = totalHours * wage;
    cout << "Gross Income: $" << totalEarning << endl;
    cout << "Net Income: $" << totalEarning - (totalEarning * TAX) << endl;
}