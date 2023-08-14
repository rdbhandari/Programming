#include <stdio.h>
struct Array{
    int A[20];
    int size;
    int length;
};
void swap(int *x , int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linearSearch(struct Array arr, int x){
    for(int i = 0; i < arr.size; i++){
        if(arr.A[i] == x){return i;}
    }
    return (-1);
}
int linearSearchImprovedByTransposition(struct Array *arr, int x){
    for(int i = 0; i < arr->size; i++){
        if(arr->A[i] == x){
            if(i != 0){
                swap(&arr->A[i], &arr->A[i-1]);
            }
            return i;
        }
    }
    return (-1);
}
int linearSearchImprovedByMoveToFront(struct Array *arr, int x){
    for(int i = 0; i < arr->size; i++){
        if(arr->A[i] == x){
            if(i != 0){
                swap(&arr->A[i], &arr->A[0]);
            }
            return i;
        }
    }
    return (-1);
}

void Display(struct Array arr){
    printf("\nElements are : ");
    for(int i=0; i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int main(){
    struct Array a = {{5,2,9,3,1}, 20, 5};
    Display(a);
    printf("\nIndex of Element : %d",  linearSearch(a, 3));
    printf("\nIndex of Element : %d",  linearSearchImprovedByTransposition(&a, 3));
    Display(a);
    printf("\nIndex of Element : %d",  linearSearchImprovedByTransposition(&a, 3));
    Display(a);
    printf("\nIndex of Element : %d",  linearSearchImprovedByMoveToFront(&a, 3));
    Display(a);






    return 0;  
}


