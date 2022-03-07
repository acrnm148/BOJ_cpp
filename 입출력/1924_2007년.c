#include <stdio.h>


int showDay(int y)
{
    if (y % 7 == 1)
        printf("MON");
    else if (y % 7 == 2)
        printf("TUE");
    else if (y % 7 == 3)
        printf("WED");
    else if (y % 7 == 4)
        printf("THU");
    else if (y % 7 == 5)
        printf("FRI");
    else if (y % 7 == 6)
        printf("SAT");
    else if (y % 7 == 0)
        printf("SUN");
        
    printf("\n");
    return 0;
}

int main(void)
{
    int x, y;
    scanf("%d %d", &x, &y);

    switch (x)
    {
    case 1:
        showDay(y);
        break;
    case 2:
        y += 31;
        showDay(y);
        break;
    case 3:
        y += 31 + 28;
        showDay(y);
        break;
    case 4:
        y += 31 + 28 + 31;
        showDay(y);
        break;
    case 5:
        y += 31 + 28 + 31 + 30;
        showDay(y);
        break;
    case 6:
        y += 31 + 28 + 31 + 30 + 31;
        showDay(y);
        break;
    case 7:
        y += 31 + 28 + 31 + 30 + 31 + 30;
        showDay(y);
        break;
    case 8:
        y += 31 + 28 + 31 + 30 + 31 + 30 + 31;
        showDay(y);
        break;
    case 9:
        y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
        showDay(y);
        break;
    case 10:
        y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
        showDay(y);
        break;
    case 11:
        y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
        showDay(y);
        break;
    case 12:
        y += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
        showDay(y);
        break;

    default:
        break;
    }

    return 0;
}

