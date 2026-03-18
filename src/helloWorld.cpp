#include <iostream>
// 표준 라이브러리, 콘솔 입출력

using namespace std;
/*
c++ 표준 라이브러리에 있는 것들은 전부 std 라는 네임스페이스 안에 들어있다.
앞으로 std:: 안에 있는 이름들은 그냥 이름만 써도 된다고 정하는 것
*/

int main()
{
    cout << "Hello World!" << endl;
    cout << "Hello World!" << '\n'; // 같은 동작 end line을 수행

    // 은 한 줄 주석

    /*
    이거는 여러줄 주석
    */

    return 0;
}

// 백준 1008 A/B 문제 -> setprecision 사용법 익히기

/*
#include <iostream>
#include <iomanip>   // setprecision 때문에 필요
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(10) << a / b;

    return 0;
}
*/

// 백준 11382번,  자료형 문제 -> long long 사용법, 정수 범위 개념 익히기
/*
#include <iostream>
using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    cout << a+b+c;
    return 0;
}
*/