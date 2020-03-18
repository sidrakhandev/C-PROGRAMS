#include <iostream>
#include <ctime>   //for random class, used to seed the random number
#include <iomanip> // to manipulate the inputs
using namespace std;
int main()
{
    int randNum1, randNum2;
    int userTotal = 0;
    int compTotal = 0;
    //get the system time
    int seed = time(0);
    // seed into random number generator
    srand(seed);
    randNum1 = 1 + rand() % 100;
    randNum2 = 1 + rand() % 100;
    compTotal = randNum1 + randNum2;
    cout << setw(5) << randNum1 << endl;
    cout << setw(3) << "+" << randNum2 << endl;
    cout << "----\n";
    cin >> userTotal;
    if (userTotal == compTotal)
        cout << "Great Job!!!";
    else
    {
        cout << "Sorry! your answer is wrong"
             << " Correct answer is =" << compTotal << endl;
    }

    return 0;
}