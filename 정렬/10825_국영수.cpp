#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

struct student
{
    int kor;
    int eng;
    int math;
    string name;
};

//전체 비교
bool compare(const student& now, const student& last)
{
    if(now.kor != last.kor) return now.kor > last.kor;
    else 
    {
        if(now.eng != last.eng) return now.eng < last.eng;
        else 
        {
            if(now.math != last.math) return now.math > last.math;
                return now.name < last.name;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;

    vector<student> students(N);

    //입력
    for(int i=0; i<N; i++)
        cin >> students[i].name >> students[i].kor >> students[i].eng >> students[i].math;

    //정렬
    sort(students.begin(), students.end(), compare);

    //출력
    //cout<<"answer==\n";
    for(int i=0; i<N; i++)
        cout << students[i].name<< "\n";
}