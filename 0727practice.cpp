#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
    int rNum, sum;
    srand (time (0));
    for (int i = 0; i < 5 ; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 10; j++)
        {
            rNum = rand() % (99 - 10 + 1) + 10;
            cout << rNum << " ";
            sum += rNum;
        }
    cout << " Sum: " << sum << endl;
    }
    return 0; 
}