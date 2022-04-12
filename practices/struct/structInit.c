#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

/* Define the structure */
struct Employee {
    char *department_name;
    unsigned int salary;
    unsigned int ssn;
};


int main() {

   struct Employee e1 = {"HR", 1000 , 10};
   struct Employee e2 = {"Sales", 2000, 20};
   struct Employee e3 = {"Research", 3000, 30};

   printf("%s\t %d\t %d\n", e1.department_name, e1.salary, e1.ssn);
   printf("%s\t %d\t %d\n", e2.department_name, e2.salary, e2.ssn);
   printf("%s\t %d\t %d\n", e3.department_name, e3.salary, e3.ssn);
   return 0;
}
