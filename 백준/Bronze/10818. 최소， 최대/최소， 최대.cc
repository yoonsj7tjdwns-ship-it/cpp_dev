#include <iostream>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int arr[n]; 
    
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int min_val = arr[0];
    int max_val = arr[0];

    for(int i=0; i<n; i++)
    {

        if(arr[i] < min_val) 
        {
            min_val = arr[i]; 
        }
        if(arr[i] > max_val) 
        {
            max_val = arr[i]; 
        }
    }

    cout << min_val << " " << max_val << "\n";
    
    return 0;
}