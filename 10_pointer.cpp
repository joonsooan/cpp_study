#include <iostream>

using namespace std;

int main()
{
    // C++ : 객체지향 프로그래밍
    // 컴파일 시간이 아닌 실행 시간에 어떤 결정을 내릴 수 있음

    // 변수 선언 과정

    // 포인터 : 사용할 주소에 이름을 붙임
    // 즉, 포인터는 포인터의 이름이 주소를 나타냄
    // 간접값 연산자, 간접 참조 연산자 *

    // int *a;
    // int *b;
    // int *c, d; // c : 포인터 변수, d : int형 변수

    int a = 6;
    int *b; // 주소(위치)를 나타냄

    b = &a; // b에 a의 주소를 할당

    cout << "a의 값 " << a << endl;
    cout << "*b의 값 " << *b << endl;

    cout << "a의 주소 " << &a << endl;
    cout << "*b의 주소 " << b << endl;

    *b = *b + 1;

    cout << "이제 a의 값은 " << a << endl;

    return 0;
}