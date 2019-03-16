#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee(string nam, string num, string date)
{
    name = nam;
    number = num;
    hireDate = date;
}

string Employee::getName()
{
    return name;
}

string Employee::getNumber()
{
    return number;
}

string Employee::getHireDate()
{
    return hireDate;
}
