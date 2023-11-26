#include <iostream>

using namespace std;

int main()
{
    // 논리 표현식

    // 논리합 : ||
    // 논리곱 : &&
    // 논리부정 : !

    cout << "당신의 나이를 입력하세요";
    int age;
    cin >> age;

    if (age < 0 || age > 100)
    {
        cout << "당신의 나이는 범위를 벗어났습니다.\n";
    }
    else if (20 <= age && age <= 29)
    {
        cout << "당신은 20대이군요.\n";
    }
    else
    {
        cout << "당신은 20대가 아니군요.\n";
    }

    return 0;
}