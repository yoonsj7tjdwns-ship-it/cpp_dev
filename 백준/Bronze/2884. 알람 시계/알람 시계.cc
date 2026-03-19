#include <iostream>
using namespace std;

int main(void)
{
    int H, M;
    cin >> H >> M;
    if(H>=0 && H<=23 && M>=0 && M<=59)
        if(M>=45)
            cout << H << " " << M-45;
        else
            if(H==0)
                cout << H+23 << " " << M+15;
            else
                cout << H-1 << " " << M+15;
    return 0; 
}