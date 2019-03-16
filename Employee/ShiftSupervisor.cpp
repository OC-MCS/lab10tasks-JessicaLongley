#include <iostream>
#include "ShiftSupervisor.h"

using namespace std;

//constructors
ShiftSupervisor::ShiftSupervisor(double sal, double bon, string nam, string num, string date) : Employee(nam, num, date)
{
    salary = sal;
    bonus = bon;
}
ShiftSupervisor::ShiftSupervisor(double sal, double bon, Employee E) : Employee(E.getName(), E.getNumber(), E.getHireDate())
{
    salary = sal;
    bonus = bon;
}
double ShiftSupervisor::getSalary()
{
    return salary;
}
double ShiftSupervisor::getBonus()
{
    return bonus;
}