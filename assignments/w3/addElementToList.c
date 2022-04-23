/*  Add elements to list
    Patricio Cortes
    april 23, 2022 
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

/* Define struct list as typef */
typedef struct list{ 
    int data; 		// data in this element (node)
    struct list *next;	// pointer to next element (node)
} list;

/*Define the function "is_empty" */
int is_empty(const list *l){ 
    return (l == NULL);
}

/* Define function "create_list" */
/* head points to the first element of the list.
 * In the beginning, before we insert any elements 
 * into the list (the empty list), this variable
 * is initialized to NULL.
*/
list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head -> data = d;		//store the item in the new element (node)
    head -> next = NULL;	//the first element poits to NULL
    return head;		// returns the first element just created (node)
}

/* Define function "add_to_front" */
list* add_to_front(int d, list* h)
{
    list* head = create_list(d);
    head -> next = h;
    return head;
}

/* Define function "array_to_list" */
list* array_to_list(int d[], int size)
{
    list* head = create_list(d[0]);
    int i;
    for(i = 1; i < size; i++)
    {
        head = add_to_front(d[i], head);
     }
    return head;
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
    list list_of_int; //create the list named "list_of_int"
    list *head = NULL; //define the head is NULL
    //int data[6] = {2,3,5,7,8,9}; //define the array
    //head = array_to_list(data, 6); //now head
    head = add_to_front(5, head);
    head = add_to_front(6, head);
    print_list(head, "hello world");
    printf("\n\n");
    return 0;
} 
