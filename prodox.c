#include<stdio.h>
main(){
 
printf("enter a character:");char n;

scanf("%c",&n);
 switch(n)
 {
       case 'p':
       printf("programming.\n");
       break;
       case 'c':
       printf("coding.\n");
       break;
       case 's':
       printf("soict.\n");
       break; 
       default:
       printf("invalid input try again.\n");
       break;
       }
system("pause");
return 0;
  }
