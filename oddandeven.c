#include<stdio.h>
int main()
{
    int num ,rem;
    printf("Enter a number ");
    scanf("%d,&num");
   rem=num%2;
   if (rem==0)
{
      printf("this shit is even");
      }
      else
      {
          printf("this shit is odd");
          }
          return 0;
    }
