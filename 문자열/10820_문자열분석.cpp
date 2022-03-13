#include <iostream>
#include <string>
using namespace std;

int main()
{

    string input;
    int small, big, number, space;

    while (getline(cin, input))
    {
        small = 0;
        big = 0;
        number = 0;
        space = 0;
        for (int i = 0; i < input.length(); i++)
        {
            char input_ch = input[i];
            //소문자 개수
            if (input_ch >= 97 && input_ch <= 122)
                small += 1;

            //대문자 개수
            if (input_ch >= 65 && input_ch <= 90)
                big += 1;

            //숫자 개수
            if (input_ch >= 48 && input_ch <= 57)
                number += 1;

            //공백 개수
            if (input_ch == 32)
                space += 1;
        }
        cout<< small << " " << big << " " << number << " " << space<<"\n";
        
    }
}