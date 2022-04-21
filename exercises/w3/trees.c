/*  The ADT Binary Tree
    by  Kate Programmer
    September 29, 2019
*/

#include<stdio.h>
#include<stdlib.h>

typedef char DATA;
/* Define the structure */
struct node{
   DATA d;
   struct node *left;
   struct node *right;
};

typedef struct node NODE; //name the node structure: NODE
typedef NODE *BTREE; //BTREE is a pointer to NODE

void inorder(BTREE root)
{
    if (root != NULL){
       inorder(root -> left);
       printf("%c ", root ->d);
       inorder(root -> right);
    }
}

/* Build the Tree */
BTREE new_node(void)
{    return(malloc(sizeof(NODE))); }

/* Initialize the data */
BTREE init_node(DATA d1, BTREE p1, BTREE p2)
{    
    BTREE t;
    t = new_node(); //create a new node
    t -> d = d1; // assigne values to each member of the struct
    t -> left = p1;
    t -> right = p2;
    return t;
}

BTREE create_tree(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL;
    else
	return(init_node(a[i],
		create_tree(a, 2*i + 1, size),
		create_tree(a, 2*i + 2, size)));
}

int main()
{
    char d[] = {'a', 'b', 'c', 'd', 'e'};
    BTREE b;
    b = create_tree(d, 0, 5);
    inorder(b);
    printf("\n\n");
    return 0;
}
