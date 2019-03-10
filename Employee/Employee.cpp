#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

Employee::Employee()
{
    //name = "NA"; NO DEFALT CONSTRUCTORS WOOPS
    //number = "NA";
    //hireDate = "NA";
}

Employee::Employee(string nam, string num, string date)
{
    name = nam;
    number = num;
    hireDate = date;
}


