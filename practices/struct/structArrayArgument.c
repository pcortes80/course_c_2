/* Code done with the help of
   https://www.youtube.com/watch?v=8kOtIcar3ck
   Passing array of structure as argument.
*/

#include <stdio.h>
#include <stdlib.h>

/* Define the structure */
struct Employee {
    char name[10];
    int salary;
    int ssn; //security social number
};

void print(struct Employee emp[]){
    int i;
    for(i=0; i<2; i++)
        printf("%s\t %d\t %d\t\n", emp[i].name, emp[i].salary, emp[i].ssn );
}

int main() {
    /* Define and initialize the array */
    struct Employee emp[2] = {
    {"Sam", 1000 , 10},
    {"John", 2000 , 20}};
    /* Call function "print" before edit it */
    print(emp);
    return 0;
}