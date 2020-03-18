/*Assuming the ocean's level is currently rising at about 1.5mm per year, write a program that displays a table showing the number of mm that the ocean will
 have risen each ear for the next 25 years. */

#include <iostream>
using namespace std;
int main()
{
    double level = 0;
    int years = 25;
    for (int i = 1; i <= years; ++i)
    {
        level += 1.5;
        cout << "year " << i << ":" << level << "mm" << endl;
    }
    return 0;
}