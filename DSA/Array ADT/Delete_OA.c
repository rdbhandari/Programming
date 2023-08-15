#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int Delete_OA(struct Array *arr, int index){
    if(index >= 0 && index < (arr->Length)){
        for(int i = index; i < (arr->Length); i++){
            (arr->Data[i]) = (arr->Data[i+1]);
        }
        (arr->Length) -= 1;
        return 1;
    }
    return 0;    
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
