#include <iostream>
using namespace std;

int main(void)
{
    int arr[10];
    int check[42] = {0};

    for(int i = 0; i < 10; i++)
    {
        cin >> arr[i];
        check[arr[i] % 42] = 1;
    }

    int count = 0;

    for(int i = 0; i < 42; i++)
    {
        if(check[i] == 1)
            count++;
    }

    cout << count;
}