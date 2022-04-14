/* Code done with the help of
   https://www.youtube.com/watch?v=f-AR6vUuTYc
   Pass pointer to structure member as an argument.
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
void print(struct Employee *ptr){
    printf("%s\t %d\t %d\t\n", ptr->name, ptr->salary, ptr->ssn);
}

int main() {
    struct Employee emp1 = {"Sam", 1000 , 10};
    struct Employee emp2 = {"John", 2000 , 20};
    /* call the function "print" */
    print(&emp1); // function called by reference
    print(&emp2); // function called by reference
    // note: this is more efficient because we avoid
    // passing the copy of the structure when it is
    // a big structure. In this case we are not using the
    // memory in the correct way.
    return 0;
}