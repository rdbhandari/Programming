#define MAXSIZE 20
#include<stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

void RearrangePositiveNegetiveNumbers(struct Array a){
    int i = 0, j = (a.Length-1), temp;
    while (i < j){
        while (i < j){
            while(a.Data[i] < 0) i += 1;
            while(a.Data[j] >= 0) j -= 1;
            if(i<j){
                temp = a.Data[i];
                a.Data[i] = a.Data[j];
                a.Data[j] = temp;
            }
        }        
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
    
}