#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string str;
    int x;

    cin >> str;
    cin >> x;

    cout << str[x-1];

    return 0;
}