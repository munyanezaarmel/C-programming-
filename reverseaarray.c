#include<stdio.h>
main(){
       int i, a[10]={0,7,8,6,7,4,4,4,0,3};
       printf("the number in original order is: ");
       for(i=0;i<10;i++)
       {
         printf("%d ",a[i]);
       }
       printf("\n");
       printf("the number in reverse  order is: ");
       for(i=9;i>=0;i--){
         printf("%d ",a[i]);
                         }
                     printf("\n");    
system("pause");
                         }
