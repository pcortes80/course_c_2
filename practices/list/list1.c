 /* Code from Practical C book
    page 284
    Linked List
*/

#include<stdio.h>
#include<stdlib.h>

/* Declare structure */

struct linked_list {
	char data[30];			// data in this element
	struct linked_list *next_ptr;	// pointer to next element
};

/* variable 'first_ptr' points to the first element of the list
 * at the beginning (list empty) first element is NULL */
struct linked_list *first_ptr = NULL;

