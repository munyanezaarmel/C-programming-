#include<stdio.h>
int main()
{ 
    int days,feb;
    printf("enter 1 if day is in leap year or enter 0 if it does not ");
    scanf("%c",&feb);
    days=(feb=="1")?29:28;
    printf("number of days in february%d",days);
    system("PAUSE");
    return 0;

    }

   
