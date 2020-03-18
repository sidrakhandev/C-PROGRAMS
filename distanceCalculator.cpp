/*
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is 120 miles.
Write a program that asks the user for the speed of a 
vehicle and how many hours it has traveled. The program should then 
use a loop to display the distance the vehicle traveled for each hour 
of that time.  */
#include <iostream>
using namespace std;
int main()
{
    float speed, distance;
    int time;
    cout << "Enter the speed of a vehicle" << endl;
    cin >> speed;
    while (speed <= 0)
    {
        cout << "Speed must be greater than 0.Please again enter the speed" << endl;
        cin >> speed;
    }
    cout << "Enter the no of hours you had been travelled" << endl;
    cin >> time;
    while (time < 1)
    {
        cout << "Time must be greater than 0.Please again enter the speed" << endl;
        cin >> speed;
    }
    cout << "\nHour\tDistance Travelled\n ";
    cout << "-----------------------\n";
    for (int i = 1; i <= time; ++i)
    {
        distance = speed * i;
        cout << i << "\t\t" << distance << endl;
    }

    return 0;
}