//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
//* Program name    : L1-1                                              *
//*                                                                     *
//* Written by      : Justin Calderon                                   *
//*                                                                     *
//* Purpose         : This program is designed to calculate the rate,   *                                              
//*                   hours worked and wages to determine salary. User  *                                                 
//*                   must answer prompts in order to display info.     *                                             
//*                                                                     *
//*                                                                     *
//*---------------------------------------------------------------------*
//* Change Log:                                                         *
//*                         Revision                                    *
//*       Date    Changed  Rel Ver Mod Purpose                          *
//* 02/13/22     jcalderon 000.000.000 Initial release of program       *
//*                                                                     *
//* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *

#include <iostream> //header statement
#include <string>   //header statement

using namespace std; //using statement

int main()
{

    const int SECRET = 13;
    const double RATE = 12.50;
    int num1;
    int num2;
    int newNum;
    string name;
    double hoursWorked;
    double wages;

    cout << "Justin Calderon\t" << "L1-1\t" << "L1-1.exe" << endl;

    // Display message to prompt user, capture user input values for num1 and num2.
    cout << "Type two integers separated by a space \nand then press the enter key:" << endl;
    // Capture user input.
    cin >> num1;
    cin >> num2;
    cout << endl;
    // Display user num1 and num2 input.
    cout << "The value of num1 = " << num1;
    cout << " and the value of num2 = " << num2;
    cout << endl;
    // Multiply num1 by 2 and add value of num2. Store the result into newNum.
    newNum = num1 * 2 + num2;
    cout << "The value of newNum = ";
    cout << endl;
    // Update value of newNum by adding the value of the named constant SECRET to it. Display result.
    cout << "The new value of newNum = " << newNum + SECRET;
    cout << endl;
    // Display message to capture user's last name.
    cout << "Enter last name: ";
    cin >> name;
    // Display message to user to enter the decimal number between zero and 100. Store the result into hoursWorked
    cout << "Enter a decimal number between 0 and 100: ";
    cin >> hoursWorked;
    // Multiply RATE and hoursWorked. Store the result into wages.
    wages = RATE * hoursWorked;
    cout << endl;
    // Display name, RATE, hoursWorked
    cout << "Name: " << name;
    cout << endl;
    cout << "Pay Rate: " << RATE;
    cout << endl;
    cout << "Hours Worked: " << hoursWorked;
    cout << endl;
    cout << "Salary: $" << wages;
    
    char q;
    cout << "\nPress any key to Exit";
    cin.ignore(2, '\n');
    cin.get(q);
}