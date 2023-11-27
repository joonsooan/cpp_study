#include <iostream>
using namespace std;

int main()
{
    int val1 = 1;
    int val2 = 2;

    int *ptr;
    ptr = &val1;
    cout << ptr << endl;  // 메모리 주소값 출력
    cout << *ptr << endl; // 포인터가 가리키는 주소의 값 출력

    // 일반적으로 ptr은 &value와 같다.
    // *ptr은 value와 같다.
    return 0;
}