#include <iostream>
#include <iomanip>   // setprecision 때문에 필요
using namespace std;

int main()
{
    double a, b;    
    cin >> a >> b;
    cout << fixed << setprecision(10) << a / b;

    return 0;
}