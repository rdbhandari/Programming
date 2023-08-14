#include <stdio.h>

int max(int a[], int n){
    int max = 0;
    for(int i = 1; i < n; i++){
        if(a[i] > a[max])
            max = i;
    }
    return max;
}
int min(int a[], int n){
    int max = 0;
    for(int i = 1; i < n; i++){
        if(a[i] < a[max])
            max = i;
    }
    return max;
}
int main (){
    int a [] = {5,2,9,3,1};
    int n = 5;

    printf("MAX VALUE IS : %d\n", a[max(a, n)]);
    printf("MIN VALUE IS : %d", a[min(a, n)]);
}