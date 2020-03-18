/*Write a program that asks the user for a positive integer value. The program should use a loop to get the sum of all the integers from 1 up to the number entered. For example, if the user enters 50, the loop will sum 1+2+3+...+50.
Input validation: Do not accept negative numbers. */
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int num = 0;
    cout << "Enter how many numbers you need to sum " << endl;
    cin >> num;
    while (num < 0)
    {
        cout << "Please enter a positive integer ONLY!! " << endl;
        cin >> num;
    }
    for (int i = 1; i <= num; ++i)
    {
        sum += i;
    }
    cout << "Total sum is = " << sum << endl;
    return 0;
} 