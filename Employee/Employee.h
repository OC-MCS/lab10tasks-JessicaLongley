#pragma once
#include <string>
#include <iostream>

using namespace std;
class Employee
{
    string name;
    string number;
    string hireDate;

public:
    Employee(string, string, string);//other constructor, lets user enter all information as creating instance
    string getName();
    string getNumber();
    string getHireDate();
};

