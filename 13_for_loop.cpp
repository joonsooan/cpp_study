#include <iostream>

using namespace std;

int main()
{
    char a[10] = {'a', 'b', 'c', 'd', 'e'};
    // cout << a[0] << endl;
    // cout << a[1] << endl;
    // cout << a[2] << endl;
    // cout << a[3] << endl;
    // cout << a[4] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    // 증가, 감소 연산자
    int b = 10;
    int c = 10;

    cout << "b는 " << b << ", c는 " << c << endl;
    cout << "b++는 " << b++ << endl; // 판단하고 증가
    cout << "++c는 " << ++c << endl; // 증가하고 판단
    cout << "b는 " << b << ", c는 " << c << endl;

    return 0;
}