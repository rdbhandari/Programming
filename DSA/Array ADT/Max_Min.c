#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int Maximum(struct Array arr){
    int min = 0;
    for(int i = 1; i < (arr.Length); i++){
        if((arr.Data[i]) > (arr.Data[min]))
            min = i;
    }
    return min;
}

int Minimum(struct Array arr){
    int max = 0;
    for(int i = 1; i < (arr.Length); i++){
        if((arr.Data[i]) < (arr.Data[max]))
            max = i;
    }
    return max;
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
