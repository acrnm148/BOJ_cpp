#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100001];
    scanf("%s",str);
    for(int i=0; i < strlen(str); i++){
        printf("%c",str[i]);
        if((i+1)%10==0) printf("\n");
    }
}