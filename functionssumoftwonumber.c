#include<stdio.h>
main()
{
int a[9]={34,56,54,32,67,89,90,32,21};
int i;
printf("ARRAY ELEMENTS IN ORIGINAL ORDER ARE:\n");
for(i=0;i<9;i++)	
{

printf("%d\t",a[i]);
	
}
printf("\n ARRAY ELEMENTS IN REVERSE ORDER ARE:\n");
for(i=8;i>=0;i--)	
{
printf("%d\t",a[i]);	
}
system("Pause");
}

