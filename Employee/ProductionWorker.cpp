#include "ProductionWorker.h"
#include <string>
#include <iostream>

using namespace std;

int ProductionWorker::getShift()
{
    return shift;
}

double ProductionWorker::getHourlyPay()
{
    return hourlyPay;
}

ProductionWorker::ProductionWorker(int shiftType, double pay, string nam, string num, string date): Employee(nam,num,date)
{
    shift = shiftType;
    hourlyPay = pay;
}

ProductionWorker::ProductionWorker(int shiftType, double pay, Employee E) : Employee(E.getName(), E.getNumber(), E.getHireDate())
{
    shift = shiftType;
    hourlyPay = pay;
}



