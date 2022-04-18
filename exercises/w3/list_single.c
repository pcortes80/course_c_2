/*  The ADT List
    by Shelly Sysmom
    August 29, 2019
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/* Define struct list as typef */
typedef struct list{ int data; struct list *next;} list;

/*Define the function "is_empy" */
int is_empty(const list *l){ return (l == NULL);}


/*Define the function "print_list" */
void print_list(list *h, char *title)
{
  printf("%s\n", title);
  // it iterates intill the end of the list
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
