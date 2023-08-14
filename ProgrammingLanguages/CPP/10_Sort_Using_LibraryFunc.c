/*
    sizeof (int) and compare function has to be passed to qsort
    compare function is type unsafe & needs complicated cast

*/

#include <stdio.h> 
#include <stdlib.h> // qsort function

// compare Function Pointer
int compare (const void *a, const void *b) { // Type unsafe
    return (*(int*)a < *(int*)b); // Cast needed according to the data type e.g. int, double, structure
}
int main () { 
    int data[] = {32, 71, 12, 45, 26}; 
    
    // Start ptr., # elements, size, func. ptr.
    qsort (data, 5, sizeof (int), compare);
    for(int i=0; i < 5; i++)
        printf ("%d ", data [i]);
}