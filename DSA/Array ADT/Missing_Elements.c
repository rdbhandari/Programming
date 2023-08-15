#define MAXSIZE 20
#include<stdio.h>
#include<stdlib.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

void MissingElements_UoA(struct Array arr, int lb, int ub){
    int diff, n;
    diff = (lb - 0);
    n = (ub-lb)+1;

    // creating status array and setting 0
    int *A = (int*) malloc(n*sizeof(int));
    for(int i = 0; i < n; i++){
        A[i] = 0;
    }

    // setting status 1 for those elements which are presented
    for(int i = 0; i < n; i++){
        A[arr.Data[i] - diff] = 1;
    }
     for(int i = 0; i < n; i++){
        printf("%d", A[i]);
    }
    printf("\nMissing Elements : ");
    for(int i = 0; i < n; i++){
        if(A[i] == 0){
            printf("%d ", (i+diff));
        }
    }
    return;
}


void MissingElementsNotStartingFrom1_OA(struct Array arr){    
    // If array is ordered and elements are in sequene then the difference between idex and value of index will be same for all elements

    int diff = (arr.Data[0] - 0); // common diffrence between index and value of index
    printf("\nThe Missing Element: ");
    for(int i=0; i<arr.Length; i++){
        if( (arr.Data[i] - i) != diff ){
            while(diff < (arr.Data[i]-i) ){
                printf("%d ", i + diff);
                diff += 1;
            }
        }
    }
}


void MissingElementNotStartingFrom1_OA(struct Array arr){    
    // If array is ordered and elements are in sequene then the difference between idex and value of index will be same for all elements

    int diff = (arr.Data[0] - 0); // common diffrence between index and value of index
    printf("\nThe Missing Element: ");
    for(int i=0; i<arr.Length; i++){
        if( (arr.Data[i] - i) != diff ){
            printf("%d", i + diff);
            diff += 1;
        }
    }
}


void MissingElementStartingFrom1_OA(struct Array arr){
    int ub = arr.Data[(arr.Length-1)];
    int sum = (ub*(ub+1))/2;

    for(int i=0; i<arr.Length; i++){
        sum -= arr.Data[i];
    }
    printf("The Missing Element: %d", sum);
}


void Display(struct Array *arr){
    printf("Elements : ");
    for(int i=0; i<arr->Length; i++){
        printf("%d ", arr->Data[i]);
    }
}

int main (){
    struct Array a = {{1,2,4,5,6},5};
    struct Array b = {{2,4,5,6,7},5};
    struct Array c = {{2,4,5,8,10},5};
    struct Array d = {{6,9,4,3,5},5};



   
    // MissingElementStartingFrom1_OA(a);
    // MissingElementNotStartingFrom1_OA(b); 
    // MissingElementsNotStartingFrom1_OA(c);  
    // MissingElements_UoA(d, 3, 9);

    
}