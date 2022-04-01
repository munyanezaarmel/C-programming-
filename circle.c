#include<stdio.h>
voidmain()
{
int n,range,i;
printf("enter an integer to find matriplication table");
scanf("%d",&n);
printf("enter an range nd matriplication table");
scanf("%d",&range);
for(i=1;i<=n;++i);
{
for(i=1;i<=range;++i);
{
printf("%d*%d=%d\n",n,i,n*i);
}
}
}
