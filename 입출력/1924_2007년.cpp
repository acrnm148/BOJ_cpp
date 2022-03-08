#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int x, y;
    vector<int> vdate = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    vector<string> vday = {"SUN", "MON", "TUE", "WED", "THU", "FRI",
                           "SAT"};
    cin>>x>>y;

    for (int i = 0; i < x; i++)
    {
        y += vdate[i];
    }
    cout<<vday[y % 7];
}