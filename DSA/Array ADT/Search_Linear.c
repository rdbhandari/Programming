#define MAXSIZE 20
#include <stdio.h>
#include<stdlib.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int LinearSearch(struct Array arr, int x){
    for(int i = 0; i < (arr.Length); i++){
        if((arr.Data[i]) == x){return i;}
    }
    return (-1);
}
int LinearSearchImprovedByTransposition(struct Array *arr, int x){
    int temp;
    for(int i = 0; i < (arr->Length); i++){
        if(arr->Data[i] == x){
            if(i != 0){
                temp = arr->Data[i];
                arr->Data[i-1] = arr->Data[i];
                arr->Data[i] = temp;
            }
            return i;
        }
    }
    return (-1);
}
int LinearSearchImprovedByMoveToFront(struct Array *arr, int x){
    int temp;
    for(int i = 0; i < (arr->Length); i++){
        if(arr->Data[i] == x){
            if(i != 0){
                temp = arr->Data[i];
                arr->Data[0] = arr->Data[i];
                arr->Data[i] = temp;
            }
            return i;
        }
    }
    return (-1);
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