#include <iostream>
#include <string.h>
#define SIZE 20

using namespace std;

struct MyStruct
{
    char name[20];
    int age;
};

int main()
{
    // char animal[SIZE];
    // char* ps;

    // cout << "동물 이름을 입력하십시오.\n";
    // cin >> animal;

    // ps = new char[strlen(animal) +1];
    // strcpy(ps, animal);

    // cout << "입력하신 동물 이름을 복사하였습니다." << endl;
    // cout << "입력하신 동물 이름은 " << animal << "이고, 그 주소는 " << (int*)animal << " 입니다." << endl;
    // cout << "복사된 동물 이름은 " << ps << "이고, 그 주소는 " << (int*)ps << " 입니다." << endl;

    // delete[] ps;

    // 동적 구조체 생성
    // temp *ps = new temp

    MyStruct *temp = new MyStruct;
    // 구조체의 이름은 주소가 아니라 사용할 수 없는 형식
    cout << "이름을 입력하세요.\n";
    cin >> temp->name; // 화살표 연산자를 이용해 멤버에 접근

    cout << "나이를 입력하세요.\n";
    cin >> (*temp).age; // temp->age 동일한 연산자

    cout << "안녕하세요 " << temp->name << "씨\n";
    cout << "당신은 " << temp->age << "살 이군요\n";

    delete temp;
    return 0;
}