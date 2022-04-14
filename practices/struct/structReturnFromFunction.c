/* Code done with the help of
   https://www.youtube.com/watch?v=bN2h1cdj1to
   Return a structure variable from a function.
*/

#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char name[10];
    int salary;
    int ssn; //security social number
};

/* Define the "edit" function */
/* This function will return a structur Employee */
struct Employee edit(struct Employee emp){
    emp.salary = emp.salary + 500;
    return emp;
}

/* Define the function "print" */
void print(struct Employee emp){
    printf("%s\t %d\t %d\t\n", emp.name, emp.salary, emp.ssn);
}

int main() {
    struct Employee emp1 = {"Sam", 1000 , 10};
    struct Employee emp2 = {"John", 2000 , 20};
    /* Call function "print" before edit it */
    print(emp1);
    print(emp2);
    /* call function "edit" */
    emp1 = edit(emp1);
    emp2 = edit(emp2);
    /* call the function "print" */
    print(emp1); // function called by value
    print(emp2); // function called by value
    return 0;
}