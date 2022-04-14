/* Code done with the help of
   https://www.youtube.com/watch?v=uw8gkmhUwQ8&t=45s
   Pass structure variable as argument.
*/

#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char name[10];
    int salary;
    int ssn; //security social number
};

/* Define the function "print" */
void print(struct Employee emp){
    printf("%s\t %d\t %d\t\n", emp.name, emp.salary, emp.ssn);
}

int main() {
    struct Employee emp1 = {"Sam", 1000 , 10};
    struct Employee emp2 = {"John", 2000 , 20};
    /* call the function "print" */
    print(emp1); // function called by value
    print(emp2); // function called by value
    return 0;
}