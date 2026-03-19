#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str); 

    if (str.empty()) 
    {
        cout << 0 << "\n";
        return 0;
    }

    int spaces = 0; 

    for (int i = 0; i < str.length(); i++) 
    {
        if (str[i] == ' ') 
        {
            spaces++;
        }
    }

    if (str[0] == ' ') 
    {
        spaces--;
    }
    if (str[str.length() - 1] == ' ') 
    {
        spaces--;
    }

    cout << spaces + 1 << "\n";

    return 0;
}