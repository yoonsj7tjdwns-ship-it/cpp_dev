#include <iostream>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;
    
    int arr[101];
    
    for(int i = 1; i <= N; i++)
    {
        arr[i] = i;
    }
    
    int a, b;

    for(int x = 1; x <= M; x++)
    {
        cin >> a >> b;
        
        while(a < b) 
        {
            int temp = arr[a];
            arr[a] = arr[b];
            arr[b] = temp;

            a++;
            b--;
        }
    }
    
    for(int i = 1; i <= N; i++) 
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}