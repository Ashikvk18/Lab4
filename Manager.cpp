#include <string>
#include <cstdlib>
#include "Manager.h"
#include "Employee.h"

using namespace std;

// Manager class Constructor
Manager::Manager(string manager_name, double manager_wage, double manager_hour, double manager_bonus) : Employee(manager_name, manager_wage, manager_hour)
{
    bonus = manager_bonus;
}

//Calculating pay for a manager
double Manager::calculatePay()
{
  double base_pay;
  base_pay = Employee::calculatePay();
  return base_pay + bonus;
}
