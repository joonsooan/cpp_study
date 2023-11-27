#include <iostream>

using namespace std;

void helloCPP(int n);

int main()
{
    int times;
    cout << "정수를 입력하세요\n";
    cin >> times;
    helloCPP(times);
    return 0;
}

void helloCPP(int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Hello C++\n";
    }
}