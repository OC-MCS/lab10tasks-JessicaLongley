#include "Employee.h"
#include "ProductionWorker.h"
#include "ShiftSupervisor.h"
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
    cout << "Production Worker Shift Type: " << otherGuy.getShift() << endl;
    cout << "Production Worker Hourly Pay: $" << otherGuy.getHourlyPay() << endl;
    cout << "Production Worker Name: " << otherGuy.getName() << endl;
    cout << "Production Worker Number: " << otherGuy.getNumber() << endl;
    cout << "Production Worker Hire Date: " << otherGuy.getHireDate() << endl << endl;

    ProductionWorker specificJob(2, 9.15, boss);
    cout << "Production Worker Shift Type: " << specificJob.getShift() << endl;
    cout << "Production Worker Hourly Pay: $" << specificJob.getHourlyPay() << endl;
    cout << "Production Worker Name: " << specificJob.getName() << endl;
    cout << "Production Worker Number: " << specificJob.getNumber() << endl;
    cout << "Production Worker Hire Date: " << specificJob.getHireDate() << endl << endl;

    ShiftSupervisor NewGuy(30000.00, 200.52, "Jeff", "679", "2-12-2019");
    cout << "Shift Supervisor Salary: $" << NewGuy.getSalary() << endl;
    cout << "Shift Supervisor Bonus: $" << NewGuy.getBonus() << endl;
    cout << "Shift Supervisor Name: " << NewGuy.getName() << endl;
    cout << "Shift Supervisor Production Number: " << NewGuy.getNumber() << endl;
    cout << "Shift Supervisor Production Hire Date: " << NewGuy.getHireDate() << endl << endl;

    return 0;
}