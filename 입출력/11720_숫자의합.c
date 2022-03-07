#include<stdio.h>

int main()
{
    int T;
    int sum = 0;
    char num[101] = "";
    scanf("%d",&T);
    scanf("%s", num);
    for(int i=0; i<T; i++)
    {
        sum += num[i]-48;
    }
    printf("%d",sum);

    return 0;

}