#include <iostream>

using namespace std;

int main()
{
    // 공용체(union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음

    union MyUnion
    {
        int inVal;
        long longVal;
        float floatVal;
    };
    /*
    MyUnion test;
    test.inVal = 1;
    std::cout << test.inVal << std::endl;
    test.longVal = 33;
    std::cout << test.inVal << std::endl;
    std::cout << test.longVal << std::endl;
    test.floatVal = 3.3;
    std::cout << test.inVal << std::endl;
    std::cout << test.longVal << std::endl;
    std::cout << test.floatVal << std::endl;
    */
    // 열거체 (enum)
    // 기호 상수를 만드는 또다른 방법

    enum spectrum
    {
        red,
        orange,
        yellow,
        green,
        blue,
        violet,
        indigo,
        ultraviolet
    };

    spectrum a = orange;
    cout << a << endl;

    int b;
    b = blue;
    cout << a << endl;

    int c;
    c = indigo + 5;
    cout << c << endl;

    return 0;
}