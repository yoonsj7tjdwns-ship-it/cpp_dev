#include <iostream>
using namespace std;

int main(void)
{
    int n = 9;
    int arr[n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    int max_int = arr[0];
    int max_int_index = 1;

    for(int i=0; i<n; i++)
    {
        if(arr[i] > max_int)
        {
            max_int = arr[i];
            max_int_index = i + 1;
        }
    }

    cout << max_int << endl;
    cout << max_int_index;

    return 0;
}