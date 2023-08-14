#include<stdio.h>

void sepearatePositiveNegetiveNumbers(int a[], int n){
    int i = 0, j = (n-1), temp;
    while (i < j){
        while (i < j){
            while(a[i] < 0) i += 1;
            while(a[j] >= 0) j -= 1;
            if(i<j){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
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
    int a [] = {35,-9,23,21,-32, 8, -43}, n = 7;
    sepearatePositiveNegetiveNumbers(a, n);
    display(a, n);
    
}