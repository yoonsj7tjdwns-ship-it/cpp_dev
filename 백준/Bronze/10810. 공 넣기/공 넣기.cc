#include <iostream>
using namespace std;

int main(void)
{
    int N, M;
    cin >> N >> M;

    int arr[101] = {0};

    int i, j, k;

    for(int x = 0; x < M; x++)
    {
        cin >> i >> j >> k;

        for(int a = i; a <= j; a++)
        {
            arr[a] = k;
        }
    }

    for(int x = 1; x <= N; x++)
    {
        cout << arr[x] << " ";
    }
}