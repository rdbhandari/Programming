#include<stdio.h>
#include<stdlib.h>

int isSorted(int a[], int n){
    for (int i = 0; i < (n-1); i++){
        if(a[i] > a[i+1]){return 0;}
    }
    return 1;
    
}
void display(int a[], int n){
    printf("Elements : ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int main (){
    int a [] = {5,9,13,21,32}, n = 5;
    int b [] = {5,2,1,3,1}, m = 5;
    if(isSorted(b, m) == 1)
        printf("Array is sorted...");
    else
        printf("Array is not sorted...");
    
}