#pragma once
#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class ProductionWorker: public Employee
{
    int shift; //day shift = 1 , night shift = 2
    double hourlyPay;
    //enum Shift {DAY, NIGHT}; //an enumerated data type could be used for the shift types (see page 633)
    
public:
    int getShift();
    double getHourlyPay();
	ProductionWorker(int, double, string, string, string);
    ProductionWorker(int, double, Employee);
};

