#define MAXSIZE 20
#include <stdio.h>
#include<stdlib.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

void Reverse(struct Array arr){
    int i, j;
    int *b = (int*)malloc(arr.Length * sizeof(int));
    for(i=(arr.Length-1), j=0; i>=0, j<arr.Length; i--,j++){
        b[j] = arr.Data[i];
    }
    for(int i = 0; i < arr.Length; i++){
        arr.Data[i] = b[i];
    }
    return;
}
void Reverse2(struct Array arr){
    int i, j, temp;
    for(i=0, j=(arr.Length-1); i<j; i++,j--){
        temp = arr.Data[i];
        arr.Data[i] = arr.Data[j];
        arr.Data[j] = temp;
    }
    return;
}

void Display(struct Array arr){
    printf("Elements : ");
    for(int i=0; i<arr.Length; i++){
        printf("%d ", arr.Data[i]);
    }
}

int main (){
    int a [] = {5,2,9,3,1}, n = 5;
    
    
}