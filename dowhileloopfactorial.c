#include<stdio.h>
int main()
{
    int n,fact;
    do
{
    printf("Enter a number\n");
    scanf("%n",&n);
    fact=fact*n;
    --n;
    
}
    while(n>0);
    printf("the factorial is %d",fact);

system("pause");
    return 0;
    }
