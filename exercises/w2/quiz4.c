#include<stdio.h>

int main()
{
    struct point{
    double x;
    double y;
    } p1 = { 4, 4.0};

    printf("%f\n", p1.x);
}