#include <iostream>
using namespace std;
int main()
{
    /*  country club, which currently charges $2,500 per year for 
    membership, has announced it will increase its membership fees 
    by 4% each year for the next six years. Write a program that uses a
     program to display the projected rates for the next six years.*/

    const float increase = 0.04;
    const int years = 6;
    float membership = 2500;
    for (int i = 0; i <= years; ++i)

    {
        membership += (membership * increase);
        cout << "Year " << i << " fees are: $" << membership << endl;
    }

    return 0;
}