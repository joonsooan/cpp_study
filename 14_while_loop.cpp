#include <iostream>

using namespace std;

int main()
{
    // while문, do while문
    // string str = "joonsooan";
    // int i = 0;
    // while (str[i] != '\0')
    // {
    //     cout << str[i] << endl;
    //     i++;
    // }
    // return 0;

    // 배열 기반 반복문
    // int a[5] = {1, 2, 3, 4, 5};

    // for (int i : a)
    // {
    //     cout << i;
    // }

    // 중첩 루프 : 2차원 배열
    int temp[4][5] =
        {
            {1, 2, 3, 4, 5},
            {11, 22, 33, 44, 55},
            {111, 222, 333, 444, 555},
            {10, 20, 30, 40, 50},
        };

    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 5; col++)
        {
            cout << temp[row][col] << endl;
        }
    }

    return 0;
}