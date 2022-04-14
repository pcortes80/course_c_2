#include<stdio.h>

int main()
{
    struct point{
    double x;
    double y;
    int z;
    } p1 = {2.5, 4.0, 5};

    printf("Employee 1: x = %f, Y = %f, z = %d\n", p1.x, p1.y, p1.z);
}