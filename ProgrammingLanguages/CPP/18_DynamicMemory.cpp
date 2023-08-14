#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    // USING MALLOC
    int *p = (int*)malloc(sizeof(int));
    *p = 5;
    cout << (*p) << endl; 
    free(p);
    
    // USING operator new
    // C++ introduces operators new and delete to dynamically allocate and de-allocate memory
    int *q = new int(10); 
    // new is a prefix operator, interestingly operand of operator is not value/variable but it is type
    cout << (*q) << endl; 
    delete(q);

    // USING operator new[]
    int *a = new int[3];
    a[0] = 2; a[1] = 4; a[2] = 6;

    cout << a[0] << " " << a[1] <<  " " << a[2] << endl;
    delete []a;




    return 0;
}
/*
    operator nev for allocation on heap
    No size specification needed, type suffices
    Allocated memory returned as int*
    No casting needed
    Can be initialized
    operator delete for de-allocation from heap
    Core language feature — no header needed
*/

/*
    RESTTRICTION

    Allocation and De-allocation must correctly match.
        o Do not free the space created by new using free ( )
        o And do not use delete if memory is allocated through malloc()
    These may results in memory corruption

    Allocator and Respective De-allocator
        malloc () <---> free()
        operator new <---> operator delete
        operator new [] <---> operator delete []
        operator new() <---> No delete
    
    Passing NULL pointer to delete operator is secure
    Prefer to use only new and delete in a C++ program
    The new operator allocates exact amount of memory from Heap or Free Store
    new returns the given pointer type — no need to typecast
    new, new[] and delete, delete [] have separate semantics





*/