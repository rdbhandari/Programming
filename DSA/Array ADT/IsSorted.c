#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int isSorted(struct Array a){
    for (int i = 0; i < (a.Data-1); i++){
        if(a.Data[i] > a.Data[i+1])
            return 0;
    }
    return 1;
    
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