#include <iostream>
using namespace std;

int main()
{
    int hour, min, time;
    cin >> hour >> min;
    cin >> time;

    int total = hour * 60 + min + time;

    hour = (total / 60) % 24;
    min = total % 60;

    cout << hour << " " << min;

    return 0;
}
