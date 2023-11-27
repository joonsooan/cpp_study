#include <iostream>

using namespace std;

const int SIZE = 8;

int sumArr(int *, int *);

int main()
{
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64, 128};

    int sum = sumArr(arr, arr + SIZE);
    cout << "배열의 총합은 " << sum << "입니다.\n";

    sum = sumArr(arr, arr + 3);
    cout << "배열의 세번째 인덱스까지의 합은 " << sum << "입니다.\n";
    return 0;
}

int sumArr(int *begin, int *end)
{
    int total = 0;
    int *pt;
    for (pt = begin; pt != end; pt++)
    {
        total += *pt;
    }
    return total;
}