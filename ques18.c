

#include <stdio.h>
int main(){
//tanisha Singh
    int a, b;
    printf("Enter the month from 1 to 12 : ");
    scanf("%d", &a);
    printf("Enter the year: ");
    scanf("%d", &b);
    int days = 0;
    if (b % 4 == 0)
    {

        if (a == 1 || a == 3 || a == 7 || a == 5 || a == 8 || a == 10 || a == 12)
        {
            days += 31;
        }
        else if (a == 2)
        {
            days += 28;
        }
        else
            days += 30;
    }
    else
    {
        if (a == 1 || a == 3 || a == 7 || a == 5 || a == 8 || a == 10 || a == 12)
        {
            days += 31;
        }
        else if (a == 2)
        {
            days += 28;
        }
        else
            days += 30;
    }

    printf("The total number of days are %d", days);
}
