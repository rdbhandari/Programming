#include <stdio.h>
struct Array{
    int A[20];
    int size;
    int length;
};

int Append(struct Array *arr, int x){
    if(arr->length < arr->size){
        arr->A[arr->length] = x;
        arr->length += 1;
        return 1;
    }else return 0;
}

int Insert(struct Array *arr, int x, int index){
    if(index >= 0 && index < arr->size){
        for(int i = arr->length; i >= index ; i--){
            arr->A[i + 1] = arr->A[i];            
        }
        arr->A[index] = x;
        arr->length += 1;
    }else return 0;
}
int InsertToSortedArray(struct Array *arr, int x){
    if(arr->length == arr->size) return 0;
    int i = (arr->length-1);
    while (i >= 0 && arr->A[i] > x ){
        arr->A[i+1] = arr->A[i];
        i -= 1;
    }
    arr->A[i+1] = x;
    arr->length += 1;
    return 1;
}

int Delete(struct Array *arr, int index){
    if(index >= 0 && index < arr->length){
        for(int i = index; i < arr->length; i++){
            arr->A[i] = arr->A[i+1];
        }
        arr->length -= 1;
        return 1;
    }
    return 0;
    
}


void Display(struct Array arr){
    int i = 0;
    printf("\nElements are : ");
    for(i=0; i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int main(){
    struct Array a = {{5,2,9,3,1}, 20, 5};
    struct Array b = {{5,9,10,13,33}, 20, 5};
    // Display(a);
    // Append(&a, 7);
    // Display(a);
    // Insert(&a, 4, 1);
    // Display(a);
    // Delete(&a, 1);
    // Display(a);
    Display(b);
    InsertToSortedArray(&b, 11);
    Display(b);

    return 0;  
}

