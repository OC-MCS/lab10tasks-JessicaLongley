#pragma once
#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class ProductionWorker: public Employee
{
    int shift; //day shift = 1 , night shift = 2
    double hourlyPay;
    
public:
    int getShift();
    double getHourlyPay();
	ProductionWorker(int, double, string, string, string);
    ProductionWorker(int, double, Employee);
};

