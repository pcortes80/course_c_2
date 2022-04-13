#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char department_name[10];
    int salary;
    int ssn;
};

/* Define the function "print" */

void print(char department_name[], int salary, int ssn){
    printf("%s\t %d\t %d\t\n", department_name, salary, ssn);
}

int main() {

    struct Employee e1 = {"HR", 1000 , 10};
    /* call thefunction "print" */
    print(e1.department_name,e1.salary, e1.ssn);
    return 0;
}
