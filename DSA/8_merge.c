#include<stdio.h>
#include<stdlib.h>

int* mergeAAA(int a[], int n, int b[], int m){
    int i, j, k, *c;
    i = j = k = 0;

    c = (int*)malloc((m+n)*sizeof(int));
    while(i < n && j < m){
        if(a[i] < a[j])         
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }
    while(i<n)
        c[k++] = a[i++];
    while(j<n)
        c[k++] = b[j++];

    return c;
}

void display(int a[], int n){
    printf("Elements : ");
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
}
int main (){
    int a [] = {3, 8, 16, 20, 25}, n = 5;
    int b [] = {4, 10, 12, 22, 23}, m = 5;
   
    display(mergeAAA(a, n, b, m), (m+n));
    
}