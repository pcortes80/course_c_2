#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char department_name[10];
    int salary;
    int ssn;
};

int main() {

    struct Employee e1 = {"HR", 1000 , 10};
    /* Define a pointer */
    struct Employee *ptr = &e1; 
    //struct Employee e2 = {"Sales", 2000, 20};
    //struct Employee e3 = {"Research", 3000, 30};
   
    printf("%s\t %d\t %d\n", ptr->department_name,ptr->salary, ptr->ssn);
    // ptr->department_name isequivalent to (*ptr).department_name
    //printf("%s\t %d\t %d\n", e2.department_name, e2.salary, e2.ssn);
    //printf("%s\t %d\t %d\n", e3.department_name, e3.salary, e3.ssn);
    return 0;
}
