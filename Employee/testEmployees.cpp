#include "Employee.h"
#include "ProductionWorker.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
    Employee boss("Joe", "123", "1-1-1999");
    cout << "Employee Name: " << boss.getName() << endl;
    cout << "Employee Number: " << boss.getNumber() << endl;
    cout << "Employee Hire Date: " << boss.getHireDate() << endl << endl;

    ProductionWorker otherGuy(1, 8.25, "Bob", "456", "2-2-2000");
    cout << "Shift Type: " << otherGuy.getShift() << endl;
    cout << "Hourly Pay: $" << otherGuy.getHourlyPay() << endl;
    cout << "Production Name: " << otherGuy.getName() << endl;
    cout << "Production Number: " << otherGuy.getNumber() << endl;
    cout << "Production Hire Date: " << otherGuy.getHireDate() << endl << endl;

    ProductionWorker specificJob(2, 9.15, boss);
    cout << "Shift Type: " << specificJob.getShift() << endl;
    cout << "Hourly Pay: $" << specificJob.getHourlyPay() << endl;
    cout << "Production Name: " << specificJob.getName() << endl;
    cout << "Production Number: " << specificJob.getNumber() << endl;
    cout << "Production Hire Date: " << specificJob.getHireDate() << endl << endl;


    return 0;
}