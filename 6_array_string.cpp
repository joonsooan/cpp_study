#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*
    c++는 복합데이터형을 제공.
    >> 사용자 정의대로 새로운 데이터형을 만들 수 있음.
    복합데이터형: 기본 정수형과 부동소수점형의 조합
    */

    /*
    배열(array) : 같은 데이터형의 집합
    char 배열을 이용해 문자열을 만들 수 있음
    */

    short month[12] = {1,
                       2,
                       3,
                       4,
                       5};

    char a[] = "Hello";

    cout << a << endl;
    return 0;
}