#ifndef MANAGER_H
#define MANAGER_H
#include "Employee.h"


// Manager class derived from Base class Employee
class Manager : public Employee
{
 private:
  double bonus;
 public:
  // Manager class Constructor
  Manager(string name, double wage, double hours, double bonus);

  // calculating pay for a manager
  double calculatePay();
};
#endif // MANAGER_H
