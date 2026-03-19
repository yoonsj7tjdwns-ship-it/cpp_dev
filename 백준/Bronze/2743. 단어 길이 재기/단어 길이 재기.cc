#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string str;
    int n = 0;

    cin >> str;

    for (int i = 0; str[i] != '\0'; i++) 
    {
        n++;
    }

    cout << n << endl;

    return 0;
}