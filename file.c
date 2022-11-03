#include<stdio.h>
#include<conio.h>

void main()
{
    FILE *fptr;
    int id;
    char firstname[20];
    char lastname[20];
    int age;
    float salary;

    fptr = fopen("emp.txt", "ab");

    if (fptr == NULL)
    {
        printf("File does not exist.\n");
        return;
    }
    printf("Enter id:\n");
    scanf("%d", &id);
    fprintf(fptr, "id : %d\n", id);
    printf("Enter the firstname:\n");
    scanf("%s", firstname);
     fprintf(fptr, "Firstname  : %s\n", firstname);
    printf("Enter the lastname:\n");
    scanf("%s", lastname);
    fprintf(fptr, "Lastname  : %s\n", lastname);
    printf("Enter the age:\n");
    scanf("%d", &age);
    fprintf(fptr, "Age  : %d\n", age);

    printf("Enter the salary:\n");
    scanf("%f", &salary);
    fprintf(fptr, "Salary  : %.2f\n", salary);
      printf("\nRecord stored in file called emp.txt where you saved this program ...");
    fclose(fptr);
}