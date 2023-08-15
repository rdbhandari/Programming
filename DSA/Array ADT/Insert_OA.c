#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int Insert_OA(struct Array *arr, int x, int index){
    if( (arr->Length) == MAXSIZE)
        return 0;
    int i = (arr->Length)-1;

    //Checking and Shifting 
    while (i >= 0 && arr->Data[i] > x ){
        (arr->Data[i+1]) = (arr->Data[i]);
        i -= 1;
    }
    (arr->Data[i+1]) = x;
    (arr->Length) += 1;
    return 1;
}

void Display(struct Array arr){
    printf("Elements : ");
    for(int i=0; i<arr.Length; i++){
        printf("%d ", arr.Data[i]);
    }
}
int main(){
    struct Array arr = {{2,4,6,8,10}, 5};

}
