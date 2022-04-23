/*  The ADT List
    by Shelly Sysmom
    August 29, 2019
    my practice april 21, 2022
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/* Define struct list as typedef */
typedef struct list{ 
    int data; 		// data in this element (node)
    struct list *next;	// pointer to next element (node)
} list;

/*Define the function "is_empty" */
int is_empty(const list *l){ 
    return (l == NULL);
}

/*Define the function "print_list" */
void print_list(list *h, char *title)
{
  printf("%s\n", title);
  // it iterates untill the end of the list
  while(h != NULL){
    printf("%d :", h -> data);
    h = h -> next;
    }
}

int main()
{
    list list_of_int;
    list *head = NULL;
    head = malloc(sizeof(list));
    printf("sizeof(list) = %lu\n", sizeof(list)); //unsigned long
    head -> data = 5;
    head -> next = NULL;
    print_list(head, "single element list");
    printf("\n\n");
    return 0;
} 
