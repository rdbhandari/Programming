#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int Append_UoA(struct Array *arr, int x){
    if( (arr->Length) < MAXSIZE){
        (arr->Data[(arr->Length)]) = x;
        (arr->Length) += 1;
        return 1;
    }else 
        return 0;
}
int Insert_UoA(struct Array *arr, int x, int index){
    if(index >= 0 && index < MAXSIZE){
        for(int i = (arr->Length); i >= index ; i--){
            (arr->Data[i + 1]) = (arr->Data[i]);            
        }
        (arr->Data[index]) = x;
        (arr->Length) += 1;
    }else return 0;
}



void Display(struct Array arr){
    printf("Elements : ");
    for(int i=0; i<arr.Length; i++){
        printf("%d ", arr.Data[i]);
    }
}
int main(){
    struct Array arr = {{3,5,2,1,9}, 5};

}
