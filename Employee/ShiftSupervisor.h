#pragma once
#include "Employee.h"
#include <iostream>

using namespace std;

class ShiftSupervisor : public Employee
{
    double salary;
    double bonus;
public:
    //constructor
    ShiftSupervisor(double sal, double bon, string nam, string num, string date);
    ShiftSupervisor(double sal, double bon, Employee E);
    double getSalary();
    double getBonus();
};
