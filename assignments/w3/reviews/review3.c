#include <stdio.h>
#include <string.h>
#define ELEM_NAME 15
#define ELEM_CLASS 20
#define ELECT 7

  typedef struct {
      int atom_num;
      char name[ELEM_NAME];
      char symbol[3];
      double atomic_weight;
  }
  element_t;

element_t scan_element();

void print_element(element_t my_element);

element_t

scan_element(); 

int main(void) {
  int i = 0;
  element_t my_element;

  printf("enter the atomic number:\n");
  scanf("%d", &my_element.atom_num);

  printf("enter element name:\n");
  scanf("%s", &my_element.name[ELEM_NAME]);

  printf("enter symbol:\n");
  scanf("%s", &my_element.symbol[3]);
  
  printf("enter atomic weight:");
  scanf("%lf", &my_element.atomic_weight);

    printf("\n++++++++++++++\n");
 /* output */
    printf("No.  Name  Symb. Atomic_weight\n");
    printf("%d,   %s,   %s,     %.3lf      ", my_element.atom_num,
                                                my_element.name,
                                                my_element.symbol,
                                                my_element.atomic_weight
                                                );

 return (0);
 }