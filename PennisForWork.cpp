/*
Write a program that calculates how much a person  would earn over a period of time if his or her salary is one penny the first day, two pennies the second day, and continues to double each day. The program should ask the user for the number of days. Display a table showing how much the salary was for each day, and then show the total pay at the end of the period. The outputs should be displayed in a dollar amount, not the number of pennies
 */
#include <iostream>
using namespace std;
int main()
{
    int numDays = 1;
    double money = 1.0;
    double total = 0.0;
    double dayPay = 0.0;
    cout << "Enter number of days\n";
    cin >> numDays;
    while (numDays < 1)
    {
        cout << "Please enter the valid number of days." << endl;
        cin >> numDays;
    }
    for (int i = 1; i <= numDays; ++i)
    {
        dayPay = money / 100;
        cout << "Day " << i << " you ]earned $ " << dayPay << endl;
        total += dayPay;
        money *= 2;
    }
    cout << "Total earnings are $" << total << endl;
    return 0;
}