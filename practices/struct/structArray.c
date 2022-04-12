#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char department_name[10];
    unsigned int salary;
    unsigned int ssn;
};

int main() {
   /* Define the array of strcutures */
   struct Employee emp[2]; //only 2 employees in this example
   int i;
   for(i=0; i<2; i++){
      printf("Enter the Employe %d department name: ", i+1);
      scanf("%s", &emp[i].department_name);
      printf("Enter the Employee %d salary: ", i+1);
      scanf("%d", &emp[i].salary);
      printf("Enter the Employee %d ssn: ", i+1);
      scanf("%d", &emp[i].ssn);
    }

    printf("\n");
    for(i=0;i<2;i++){
      printf("\nEmployee %d details: \n", i+1);
      printf("Department name : %s\n", emp[i].department_name);
      printf("Salary : %d\n", emp[i].salary);
      printf("Ssn : %d\n", emp[i].ssn);
    }
return 0;
}
