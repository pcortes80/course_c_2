#include<stdio.h>
#include<stdlib.h>
#include<time.h>

/* Generate random numbers from 1 to 20 */
#define BASE_NUM         1
#define RANGE            20
#define NUM_OVER         rand()% RANGE
#define RANDOM           NUM_OVER + BASE_NUM

void print_array(int how_many, int data[], char *str)
{
    int i;
    printf("%s\n",str);

    for (i = 0; i < how_many; i++)
        printf("%d\t", data[i]);
    printf("\n");
}

int main(void)
{
    srand(time(0)); //random numbers in every run
    int array[5] = {0};
    int i;

    for (i = 0; i < 5; i++)
        array[i] = RANDOM;

    print_array(5, array, "array created");

    return 0;
}

