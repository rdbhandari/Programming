#define MAXSIZE 20
#include <stdio.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

int BinarySearchR(int a[], int lb, int ub, int x){
    if(lb <= ub){
        int mid = (lb + ub)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(x < a[mid])
            return BinarySearchR(a, lb, (mid-1), x);
        else
            return BinarySearchR(a, (mid + 1), ub, x);
    }
    return -1;
}
int BinarySearchI(struct Array arr, int x){
    int lb, ub, mid;
    lb = 0; ub = ((arr.Length) - 1);
    while(lb <= ub){
        mid = (lb + ub)/2;
        if((arr.Data[mid]) == x) 
            return mid;
        else if((arr.Data[mid]) < x)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return (-1);
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
