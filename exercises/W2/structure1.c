/* Structures */

#include <stdio.h>

int main()
{
    struct{
        char    name[30];   /* name of the part */
        int     quantity;   /* how many are in the bin */
        int     cost;       /* the cost of a single part (in cents) */
        } printer_cable_bin = {"Printer Cables", 10, 1200};

    printf("%d\n", printer_cable_bin.quantity);
    printf("%d\n", printer_cable_bin.cost);
    printf("%s\n", printer_cable_bin.name);

    int total_cost = printer_cable_bin.cost * printer_cable_bin.quantity;
    printf("%d\n", total_cost);

}