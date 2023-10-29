// Ashik Dey Rupak
/*This C++ program calculates the highest paid manager among a list of managers
 and calculates the average pay of all managers. It uses a class hierarchy with Employee as the base class
 and Manager as a derived class, representing managers with a bonus on top of their hourly pay.
 The program prompts the user to enter information for multiple managers, including name, wage, hours worked, and bonus.
 It then computes the highest paid manager and the average pay of all managers and displays the results.*/

#include <iostream>
#include <string>
#include <iomanip>
#include "Manager.h"

using namespace std;

int main()
{
  // Prompt the user to enter the number of managers.
  int number_of_managers;
  cout << "Enter number of managers: ";
  cin >> number_of_managers;
  cout << endl;

  // An array of pointers for objects named Manager.
  Manager** managers = new Manager*[number_of_managers];

  // Loop to input details for each manager
  for (int i = 0; i < number_of_managers; i++)
  {
    string name;
    double wage, hours, bonus;

    cout << "Enter manager " << i << " name: ";
    cin.ignore();
    getline(cin, name);

    cout << "Enter manager " << i << " hourly wage: ";
    cin >> wage;

    cout << "Enter manager " << i << " hours worked: ";
    cin >> hours;

    cout << "Enter manager " << i << " bonus: ";
    cin >> bonus;

    cout << endl;

    // Manager object and saving the pointer in the array
    managers[i] = new Manager(name, wage, hours, bonus);
  }

  double totalPay = 0;
  double highestPay = 0;
  Manager* richest_manager = nullptr;

  // Calculating the total pay and finding who is the highest paid manager
  for (int i = 0; i < number_of_managers; ++i)
  {
    double pay = managers[i]->calculatePay();
    totalPay += pay;

    if (pay > highestPay)
    {
      highestPay = pay;
      richest_manager = managers[i];
    }
  }

  // Calculation of average pay
  double averagePay = totalPay / number_of_managers;

  cout << "Highest paid manager is " << richest_manager->getName() << " who is paid $" << fixed << setprecision(2) << highestPay << endl;
  cout << "Average pay is $ " << fixed << setprecision(2) << averagePay << endl;

  // Cleaning up dynamically allocated memory
  for (int i = 0; i < number_of_managers; ++i)
  {
    delete managers[i];
  }

  delete[] managers;

  return 0;
}
