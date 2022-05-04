/* Assignment week 4
 * Patricio Cortes
 * May, 2022
*/

#include <stdio.h>
#define MAX_HW 20

void read_data(FILE *ptr, int d[], int *size)
{
    *size = 0;
    while(fscanf(ptr, "%d", &d[*size]) == 1)
	 (*size)++;
}

void new_array(int d[], int max_size)
{
    int i;
    int new_array[max_size];
    for(i=0; i < max_size; i++){
        new_array[i] = d[i];
	printf("%d\t", new_array[i]);
    }
    printf("\n");
    //return new_array;
}

void print_data(int d[], int size)
{
   int i;
   for(i = 0; i < size ; i++){
       printf("%d\t", d[i]);
       if ((i+1) % 10 == 0) 
	  printf("\n");
   }
   printf("\n");
}

double average(int d[], int size)
{
    int i;
    double avg = 0.0;

    for(i = 0; i < size; i++)
        avg += d[i];
    return (avg/size);
}

int main()
{
    int i, sz = MAX_HW, first_value;
    FILE *ifp;
    int data[MAX_HW] = {100, 0};
     
    /* read file "myfile" saved in same directory of code */
    ifp = fopen("myfile", "r"); //r means read
    read_data(ifp, data, &sz);
    printf("The original array is :\t");
    print_data(data, sz);
    printf("\n");

    /* Get the first value of data array */
    first_value = data[0];
    printf("The first value of the original array is : %d\n", first_value);
    printf("\n");

    /* Create the new array */
    int new_data[first_value];
    for(i=0; i<first_value; i++){
        new_data[i] = data[i+1];
    }
    
    /* Print the new data array */    
    printf("The new array is :\t");
    print_data(new_data, first_value);
    printf("\n");
    
    /* Calculate the average of new data array */
    printf("The average is : %f", average(new_data, first_value));
    printf("\n\n");
    fclose(ifp); //exit leads to close - so not strictly needed
    return 0;
}












