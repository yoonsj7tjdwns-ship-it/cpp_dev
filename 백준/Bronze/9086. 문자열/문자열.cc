#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) 
    {
        string str;
        cin >> str;

        int j = 0; 

        while (str[j] != '\0') 
        {
            j++;
        }
        cout << str[0] << str[j - 1] << "\n";
    }

    return 0;
}