#define MAXSIZE 20
#include<stdio.h>
#include<stdlib.h>

struct Array{
    int Data[MAXSIZE];
    int Length;
};

// Using concept of merge : Union , Intersection, Defference
struct Array* UnionAAA(struct Array a, struct Array b){
    int i, j, k;
    i = j = k = 0;

    struct Array *c = (struct Array*)malloc(sizeof(struct Array));
    while(i < a.Length && j < b.Length){
        if(a.Data[i] < b.Data[j])         
            c->Data[k++] = a.Data[i++];
        else if(a.Data[i] > b.Data[j])
            c->Data[k++] = b.Data[j++];
        // same value will not copy twice as merge of two array procedure
        else{
            c->Data[k++] = a.Data[i++];
            j++;
        }     
    }
    while(i<a.Length)
        c->Data[k++] = a.Data[i++];
    while(j<a.Length)
        c->Data[k++] = b.Data[j++];

    c->Length = k;
    return c;
}
struct Array* IntersectionAAA(struct Array a, struct Array b){
    int i, j, k;
    i = j = k = 0;

    struct Array *c = (struct Array*)malloc(sizeof(struct Array));
    while(i < a.Length && j < b.Length){
         if(a.Data[i] < b.Data[j])         
            i++; // do not copy if two elements are not equal
        else if(a.Data[i] > b.Data[j])
            j++; // do not copy if two elements are not equal
        else{
            c->Data[k++] = a.Data[i++];
            j++;
        } 
    }
    c->Length = k;
    return c;
}

// A - B
struct Array* DifferenceAAA(struct Array a, struct Array b){
    int i, j, k;
    i = j = k = 0;

    struct Array *c = (struct Array*)malloc(sizeof(struct Array));
    while(i < a.Length && j < b.Length){
         if(a.Data[i] < b.Data[j]) 
            c->Data[k++] = a.Data[i++];
        else if(a.Data[i] > b.Data[j])
            j++; // do not copy if two elements are not equal
        else{
            i++;
            j++;
        } 
    }
    while(i<a.Length)
        c->Data[k++] = a.Data[i++];
    c->Length = k;
    return c;
}



void Display(struct Array *arr){
    printf("Elements : ");
    for(int i=0; i<arr->Length; i++){
        printf("%d ", arr->Data[i]);
    }
}

int main (){
    struct Array a = {{3,8,16,20,25},5};
    struct Array b = {{2,4,12,16,20},5};
   
    Display( DifferenceAAA(a,b));
    
}