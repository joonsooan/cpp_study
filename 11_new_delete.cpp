#include <iostream>

using namespace std;

int main()
{
    // new 연산자
    int *pointer = new int;
    // new 뒤에 오는 데이터형을 보고 알맞은 크기의 메모리 블록을 찾아내 주소를 pointer에 할당함
    // 따로 변수를 만들어 변수의 주소를 리턴할 필요 없이, 포인터 변수를 초기화할 수 있음
    // 포인터가 데이터의 객체를 지시하고 있음
    // 메모리 제어권을 사용자에게 줄 수 있음

    // delete 연산자
    // 사용한 메모리를 다시 메모리 풀로 환수
    // 환수된 메모리는 프로그램의 다른 부분이 재사용
    int *ps = new int;
    // 메모리 사용
    delete ps;
    // new를 사용한 후 반드시 delete를 사용해야 함

    double *p3 = new double[3];
    // double형 데이터 3개를 저장할 수 있는 공간의 주소를 p3에 할당

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] is " << p3[1] << ".\n";

    p3 = p3 + 1;
    // p3[0]은 0.5를 가리키고, p3[1]은 0.8을 가리키게 됨

    cout << "Now p3[0] is " << p3[0] << " and ";
    cout << "p3[1] is " << p3[1] << "\n.";

    p3 = p3 - 1;
    delete[] p3;

    return 0;
}