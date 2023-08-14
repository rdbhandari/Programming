#include<iostream>
using namespace std;

class A{
    public:
        int a;
        A(int x){this->a = x;}
};

void createobj(int x){
    A *aa = new A(6);
    A bb(6);


    cout << typeid(aa).name() << endl;
    cout << typeid(bb).name() << endl << endl;

    cout << (void *) (aa) << endl;


}

int main(){

    createobj(2);
    createobj(3);   

    return 0;
}
