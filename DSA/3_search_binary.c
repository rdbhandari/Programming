#include <stdio.h>
struct Array{
    int A[20];
    int size;
    int length;
};

int binarySearchI(struct Array arr, int x){
    int lb, ub, mid;
    lb = 0; ub = (arr.length - 1);
    while(lb <= ub){
        mid = (lb + ub)/2;
        if(arr.A[mid] == x) 
            return mid;
        else if(arr.A[mid] < x)
            lb = mid + 1;
        else
            ub = mid - 1;
    }
    return (-1);
}
int binarySearchR(int a[], int lb, int ub, int x){
    if(lb <= ub){
        int mid = (lb + ub)/2;
        if(a[mid] == x){
            return mid;
        }
        else if(x < a[mid])
            return binarySearchR(a, lb, (mid-1), x);
        else
            return binarySearchR(a, (mid + 1), ub, x);
    }
    return -1;
}

void Display(struct Array arr){
    printf("\nElements are : ");
    for(int i=0; i<arr.length; i++){
        printf("%d ", arr.A[i]);
    }
}

int main(){
    struct Array a = {{4, 8, 10, 15, 18, 21, 24, 27, 29, 33, 34, 37, 39, 41, 43}, 20, 15};
    Display(a);
    printf("\nIndex of Element : %d",  binarySearchI(a, 18));
    printf("\nIndex of Element : %d",  binarySearchI(a, 50));
    printf("\nIndex of Element : %d",  binarySearchR(a.A, 0, (a.length - 1), 18));
    printf("\nIndex of Element : %d",  binarySearchR(a.A, 0, (a.length - 1), 50));







    return 0;  
}


