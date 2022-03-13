#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct person
{
    int age;
    string name;
};

bool compare(person now, person last)
{
    if(now.age < last.age) return true;
    else return false;
}

int main()
{	
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int N;
    cin >> N;
    vector<person> people(N);

    for (int i = 0; i < N; i++)
        cin >> people[i].age >> people[i].name;

    //정렬
    //sort(people.begin(), people.end(), compare);
    /* 주의:: sort는 두 원소가 같을 때 기존 원소의 순서를 유지해준다는 보장이 없다.
             방법은 1. 두 원소가 같을 경우를 추가해주거나
                    2. stable_sort를 쓰는 것 */
    stable_sort(people.begin(), people.end(), compare);

    for (int i = 0; i < N; i++)
        cout << people[i].age << " " << people[i].name << "\n";
}