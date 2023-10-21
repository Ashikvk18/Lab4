# Lab4
This C++ program calculates the highest paid manager among a list of managers  and calculates the average pay of all managers.
Description

This C++ program is designed to calculate the highest paid manager among a list of managers and determine the average pay for all managers. It utilizes a class hierarchy with Employee as the base class and Manager as a derived class. The Manager class represents managers who receive a bonus on top of their hourly pay.
How it Works

    The program prompts the user to enter information for multiple managers, including their name, hourly wage, hours worked, and bonus.
    For each manager, the program creates a Manager object and stores it in an array.
    The program then calculates the highest paid manager and the average pay of all managers.
    The results, including the name of the highest paid manager and the average pay, are displayed with two decimal places.

Features

    Object-oriented design with a base Employee class and a derived Manager class.
    Dynamically allocated array of pointers to Manager objects.
    Calculation of manager pay, considering both hourly wage and bonuses.
    Identification of the highest paid manager.
    Computation of the average pay for all managers.
        Object-Oriented Design: The program uses a well-structured object-oriented design with a base Employee class and a derived Manager class, which allows for easy extension and modification.

    Dynamic Allocation: It uses a dynamically allocated array of pointers to Manager objects, which is a memory-efficient way to manage multiple managers without a predefined limit.

    Pay Calculation: The program calculates manager pay, considering both hourly wage and bonuses, by using the redefined calcPay method in the Manager class.

    Identification of Highest Paid Manager: It identifies the highest paid manager among the entered managers based on their calculated pay and displays their name and pay.

    Average Pay Computation: The program computes the average pay for all managers, providing a useful statistic for understanding the overall financial picture.
