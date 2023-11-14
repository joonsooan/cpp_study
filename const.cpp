#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // 원의 넓이를 구하는 프로그램

    // const float PIE = 3.1415926535;
    // // 상수: 바뀔 필요가 없거나 바뀌면 안되는 수

    // int r = 3;
    // float s = r * r * PIE;

    // cout << s << endl;

    // 데이터 변환
    int a = 3.14;

    cout << a << endl;

    // 강제적으로 데이터형 변환
    char ch = 'M';
    cout << static_cast<int>(ch) << endl;
    // C++
    // static_cast<typeName>

    return 0;
}