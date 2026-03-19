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

    int max_num;
    max_num = arr[0];
    for(int j=0; j<n; j++)
    {
        if(max_num < arr[j])
        {
            max_num = arr[j];
        }
    }

    double sum = 0; 

    for(int i=0; i<n; i++)
    {
        sum = sum + (arr[i] * 100.0 / max_num); 
    }

    double new_average = sum / n;
    
    cout << new_average << "\n";
    
    return 0;
}