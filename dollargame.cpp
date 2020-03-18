/* Create a change-counting game that gets the user tp enter to make number of coins
exactly one dollar.The program should ask the user to enter the no of pennis,
nickels,dimes and quaters. If the total value of the coins entered is one dollar
the program should congragulate the user for winning the game,otherwise the 
program should tell the user whether the amount entered was less or more 
than one dollar.*/

#include <iostream>
using namespace std;
int main()
{
    int penny, nickel, dime, quater;
    double total = 0;
    cout << "Please enter the number of penny" << endl;
    cin >> penny;
    cout << "Please enter the number of nickel" << endl;
    cin >> nickel;
    cout << "Please enter the number of dime" << endl;
    cin >> dime;
    cout << "Please enter the number of quater" << endl;
    cin >> quater;
    total = ((penny * 0.01) + (nickel * 0.05) + (dime * 0.1) + (quater * 0.25));
    if (total == 1)
        cout << "Congratulations!!!The amount entered is exactly $1";
    else if (total > 1)
        cout << "Your entered amount is greater than $1";
    else
        cout << "Your entered amount is less than $1";

    return 0;
}