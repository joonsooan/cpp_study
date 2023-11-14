#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // + - * / %

    int a = 10;
    int b = 3;
    int c = 5;

    int multiple = a / b * c;

    // cout << multiple << endl;

    // auto : 초기화하는 값을 보고 데이터형을 자동으로 결정
    auto n = 100;     // n은 int
    auto x = 1.5;     // x는 float
    auto y = 1.3e12L; // y는 long long

    return 0;
}