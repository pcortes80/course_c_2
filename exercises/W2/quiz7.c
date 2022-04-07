#include<stdio.h>

int main()
{
    //int *p1;
    struct point *ptr = &p1;

    struct point{
    double x;
    double y;
    } p1 = {2.5};

    printf("%f\n", ptr->y);
}