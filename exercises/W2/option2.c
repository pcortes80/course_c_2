#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define BASE_SALARY         1000
#define RANGE               1500
#define SALARY_OVER         rand()% RANGE
/* Salary Generator */
#define SALARY              SALARY_OVER + BASE_SALARY

/* Define the enum */
typedef enum {
    Department_HR = 1,
    Department_Sales = 2,
    Department_Research = 3,
    Department_Software = 4,
    Department_Executive = 5,
} Department;


/* Define the structure */
struct Employee {
    unsigned int department_name;
    unsigned int salary;
    unsigned int ssn;
};


int main() {

   /* declaring variables of struct Employee */
   /*struct Employee e1;
   e1.department_name = Department_HR;
   e1.salary = SALARY;
   e1.ssn =10;
   */
   struct Employee e1 = {Department_HR, SALARY , 10};
   struct Employee e2 = {Department_Sales, SALARY, 20};
   struct Employee e3 = {Department_Research, SALARY, 30};

   printf("%d\t %d\t %d\n", e1.department_name, e1.salary, e1.ssn);
   printf("%d\t %d\t %d\n", e2.department_name, e2.salary, e2.ssn);
   printf("%d\t %d\t %d\n", e3.department_name, e3.salary, e3.ssn);
   return 0;
}
