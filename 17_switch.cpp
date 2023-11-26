#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "입력하신 값은 1입니다.\n";
    case 2:
        cout << "입력하신 값은 2입니다.\n";
    case 3:
        cout << "입력하신 값은 3입니다.\n";
    case 4:
        cout << "입력하신 값은 4입니다.\n";
    default:
        break;
    }

    return 0;
}