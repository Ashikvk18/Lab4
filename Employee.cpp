#include <string>
#include <cstdlib>
using namespace std;
#include "Employee.h"
Employee::Employee (string manager_name, double manager_wage, double manager_hours)
{
 name = manager_name;
 wage = manager_wage;
 hours = manager_hours;
}
double Employee::calculatePay() const
{
 return wage * hours;
}
string Employee::getName () const
{
 return name;
}
