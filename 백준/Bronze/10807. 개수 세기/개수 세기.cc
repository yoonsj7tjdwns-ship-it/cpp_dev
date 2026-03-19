#include <iostream>
using namespace std;
int main(void)
{
    int arr[101];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> arr[i];
    int v;
    cin >> v;
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(v == arr[i])
            count++;
    }
    cout << count;
    return 0;
}