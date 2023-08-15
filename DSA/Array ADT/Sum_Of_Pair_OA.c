#define MAXSIZE 20
#include<stdio.h>
struct Array{
    int Data[MAXSIZE];
    int Length;
};

void SumOfPair_OA(struct Array arr, int sum){
    int i=0,j=(arr.Length-1);

    printf("Sum of Pair for %d : ", sum);
    while(i < j){
        if( (arr.Data[i] + arr.Data[j]) < sum)
            i += 1;
        else if((arr.Data[i] + arr.Data[j]) > sum)
            j -= 1;
        else{
            printf("[%d and %d]  ",arr.Data[i], arr.Data[j]);
            i += 1;
            j -= 1;
        }
    }
}

int main (){
    struct Array a = {{1,3,4,5,6,8,9,10,12,14},10};
   
    SumOfPair_OA(a, 10);
    
}