#include <iostream>

using namespace std;

int main()
{
    // 변수는 사용되기 전에 정의되어야 함
    int a = 2;
    int b = 4;
    b = 5;

    int d;
    {
        int c;
        d = 4;
    }
    // 블록이 끝났기 때문에 c를 사용할 수 없음
    // c = 6;
    cout << "a = " << &a << ", b = " << &b << endl;

    return 0;
}
