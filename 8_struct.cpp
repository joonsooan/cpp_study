#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    // 배열: 같은 데이터형의 집합
    // 구조체 : 다른 데이터형이 허용되는 데이터의 집합
    struct MyStruct
    {
        string name; // 멤버
        string position;
        int height;
        int weight;
    } B; // 자동으로 B라는 구조체가 만들어짐

    MyStruct A;
    A.name = "Son";
    A.position = "Striker";
    A.height = 183;
    A.weight = 77;
    /*
    MyStruct A = {
        "Son",
        "Striker",
        183,
        77
    }
    */
    /*cout << A.name << endl;
    cout << A.position << endl;
    cout << A.height << endl;
    cout << A.weight << endl;

    B = {

    };

    cout << B.height << endl;
    */

    MyStruct C[2] = {
        {"A", "A", 1, 1},
        {"B", "B", 2, 2}};

    cout << C[0].height << endl;

    return 0;
}
