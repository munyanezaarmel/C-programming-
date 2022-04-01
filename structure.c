#include<stdio.h>
struct patient{
       char name[30];
char sex [30] ;
char illenes[30];
char date[30];
int bed_number;
};
int main()
{
    struct patient patient;
strcpy(patient.name,"MELON DANI");
 strcpy(patient.sex,"MALE");
  strcpy(patient.illenes,"malaria");
   strcpy(patient.date,"12/02/2020");
   patient.bed_number=2101;
   printf("patient name is%s",patient.name);
    printf("patient sex is%s",patient.sex);
     printf("patient date is%s",patient.date);
      printf("patient illnessis%s \n",patient.illenes);
      printf("%d patient bednumber",patient.bed_number);
    system("pause");
}
    
        
