#include <iostream>
using namespace std;
/*
int main()
{
    string name;
    cout << name;
    return 1;
}
*/

/*
int main() 
{
    int rows = 3; 
    for (int i = 1; i <= rows; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            cout << "*";
        }
        cout << endl; 
    }
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int main()
{
	int hour, min, sec;
	cout << "시간 입력 : ";
	cin >> hour;
	
	cout << "분 입력 : ";
	cin >> min;
	
	cout << "초 입력 : ";
	cin >> sec;
	
	cout << "전체 시간을 초 단위로 바꾸면 : " << 3600 * hour + 60 * min + sec << endl;
	return 0;
}
*/


/*
int main()
{
    int num1, num2, num3, num4;
    cout << "1번재 숫자 입력 : ";
    cin >> num1;

    cout << "2번재 숫자 입력 : ";
    cin >> num2;

    cout << "3번재 숫자 입력 : ";
    cin >> num3;

    cout << "4번재 숫자 입력 : ";
    cin >> num4;    


    cout << "4개 숫자의 합은 : " << num1+ num2 + num3 + num4 << endl;
    return 0;
}
*/

/*
int main()
{
    int x;
    cout << "숫자 입력 : ";
    cin >> x;
    switch (x)
    {
        case 2 : x++;
        case 3 : x--;
        break;
    
    default:
        cout << "End!";
        break;
    }
    cout << "변화한 숫자의 값은 : " << x << endl;
    return 0;
}
*/

/*
int main()
{
    char grade1;

    cout << "Enter a grade (A B C D E) : ";
    cin >> grade1;

    switch (grade1)
    {
    case 'A' :
    case 'B' :
    case 'C' : cout << "grade is pass" << endl;
        break;
    case 'D' : 
    case 'E' : cout << "grade is non-pass" << endl;
        break;
    default : cout << "Error in the input" << endl;
    }
    return 0;
}
*/


/*
#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "short자료형의 최대값은 : " << numeric_limits <int>::max() << endl;
    cout << "short자료형의 최대값은 : " << numeric_limits <int>::min() << endl;
    cout << "unsigned int 자료형의 최대값은 : " << numeric_limits <unsigned int>::max() << endl;
    cout << "unsigned int 자료형의 최소값은 : " << numeric_limits <unsigned int>::min() << endl;
}
*/

int main()
{
    int num;
    cout << "양의 정수 입력 : ";
    cin >> num;

    if (num == 1)
    {
        cout << "1은 합성수가 아님" << endl;
    }
    for(int i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << num << "은 소수입니다" << endl;
            cout << "";
        }
    }
}
