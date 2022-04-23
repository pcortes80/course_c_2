/*
  Periodic elements table program
  Fernando Arbito
  April, 22, 2021
*/

#include <stdio.h>
#include <stdlib.h>

#define TOTAL_ELEMENTS 10	// total elements to ingress by the user

// struct to save the elements
typedef struct at_element{char name[10]; char symbol[2]; double weight;} at_element;

// list to ingress the saved elements
typedef struct list{at_element element; struct list *next;} list;


/**************functions to work with lists*********************/

// checks if list is empty
int is_empty(const list *l){return(l==NULL);}

// creates a list
list* create_list(at_element elem){
  list *head = malloc(sizeof(list));
  head -> element = elem;
  head -> next = NULL;
  return head;
}

// adds an element to the list
list* add_to_front(at_element elem, list *h){
  list *head = create_list(elem);
  head -> next = h;
  return head;
}

// print all the elements saved in the list
void print_list(list *h){
  printf("%s\n", "Periodic Table of Elements:");
  printf("%2s %10s %7s %7s\n",
    "#",
    "Name",
    "Symbol",
    "Weight");
  
  int i = 1;
  while(h != NULL){
    at_element *ptr_element = &(h -> element);
    
    printf("% 2d %10s %7s % 2.4lf\n",
      i,
      ptr_element -> name,
      ptr_element -> symbol,
      ptr_element -> weight);
    h = h -> next;
    i++;
  }
}


/**************main program*************************************/

int main(){
  list *elem_list;    // creates a list variable

  // writes some user output
  printf("Please ingress the periodic table element in the next format:\n");
  printf("element_name element_symbol element_weight\n");

  // gets user input
  for(int i = 0 ; i < TOTAL_ELEMENTS ; i++){
    at_element current_element;
    at_element *ptr = &current_element;

    printf("Ingress element #%d:\n", i+1);
    scanf("%s %s %lf",
      ptr  -> name,
      ptr  -> symbol,
      &ptr -> weight);  

    // saves the user input into a list
    if (i == 0)
      elem_list = create_list(current_element);
    else
      elem_list = add_to_front(current_element, elem_list);
  }
  
  // prints the info saved in the list
  printf("\n");
  print_list(elem_list);
}

















