#pragma once
#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

class ProductionWorker
{
    int shift; //day shift = 1 , night shift = 2
    double hourlyPay;
    Employee emp;//an employee is created every time a shift is created
    
public:
	ProductionWorker();
};

