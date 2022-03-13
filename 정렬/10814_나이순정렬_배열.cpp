#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct person
{
    int age, idx;
    string name; //int로 바꿔주면 오류 안남
};

bool compare(const person& now, const person& last)
{
    if (now.age != last.age) return now.age < last.age;
    return now.idx < last.idx;
}

int main()
{	
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;
    cin >> N;
    person people[100001]; //구조체 배열

    for (int i = 0; i < N; i++) { //배열에 값 넣어줌
        cin >> people[i].age >> people[i].name;
        people[i].idx = i;
    }

    //정렬
    sort(people, people + N, compare);

    //답 출력
    for (int i = 0; i < N; i++)
        cout << people[i].age << " " << people[i].name << "\n";
}