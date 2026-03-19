#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string s;
    cin >> s;

    int arr[26];
    for (int i = 0; i < 26; i++)
    {
        arr[i] = -1;
    }
    
    for (int i = 0; i < s.size(); i++)
    {
        if (arr[s[i] - 'a'] == -1)
            arr[s[i] - 'a'] = i;
    }
    for (int i = 0; i < 26; i++)
        cout << arr[i] << " ";
    return 0;
}