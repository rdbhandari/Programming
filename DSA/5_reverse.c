#include<stdio.h>
#include<stdlib.h>

void reverse(int a[], int n){
    int i, j;
    int *b = (int*)malloc(n * sizeof(int));
    for(i=(n-1), j=0; i>=0, j<n; i--,j++){
        b[j] = a[i];
    }
    for(int i = 0; i < n; i++){
        a[i] = b[i];
    }
    return;
}
void reverse2(int a[], int n){
    int i, j, temp;
    for(i=0, j=(n-1); i<j; i++,j--){
        temp = a[i];a[i] = a[j];a[j] = temp;
    }
    return;
}
void display(int a[], int n){
    printf("Elements : ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int main (){
    int a [] = {5,2,9,3,1}, n = 5;
    reverse2(a, n);
    display(a, n);
    
}