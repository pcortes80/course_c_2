/*  Generate 100 random numbers from 1 to 20
 *  Patricio Cortes
 *  april 23, 2022
*/

#include<stdio.h>
#include <stdlib.h>

/* Generate random numbers from 1 to 20 */
#define BASE_NUM         10
#define RANGE            100
#define NUM_OVER         rand()% RANGE
#define RANDOM           NUM_OVER + BASE_NUM

int main()
{
    int i;
    for(i=0; i<100; i++){
	printf("item %d = %d\n", i, rand());    
	}
}
