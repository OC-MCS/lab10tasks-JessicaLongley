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
	Employee(); //defalt constructor assigns the employee to NA for all
    Employee(string, string, string);//other constructor, lets user enter all information as creating instance

};

