#ifndef EMPLOYEE_H
#define EMPLOYEE_H

using namespace std;

// Base Employee class
class Employee
{
 public:
 // Calculation of the employee’s pay.
 Employee (string manager_name, double manager_wage, double manager_hours);
 double calculatePay() const;
 string getName () const;
 protected:
 string name;
 double wage;
 double hours;
};
#endif // EMPLOYEE_H
