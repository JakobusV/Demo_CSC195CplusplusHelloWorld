#pragma once
class Employee
{
private:
	char name[32];
    unsigned short age;
    unsigned int zipcode;
    float wage;
    unsigned short daysWorked;
    unsigned short hoursWorkedPerDay[7];
    unsigned short totalHours = 0;
    float totalEarning = 0;
    static unsigned char const DAYS_IN_WEEK = 7;
    static float const TAX;
public:
    void Read();
    void Write();
};