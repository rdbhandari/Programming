#include<iostream>
#include <stack>

using namespace std;

template <typename T>
class BTNode {
    public : 
    T data;
    BTNode<T> *left;
    BTNode<T> *right;

    BTNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};


void BST_Insert(BTNode<int> **TreePtr, int X){
    BTNode<int> *Loc = (*TreePtr);
    BTNode<int> *Par = NULL;

    // returns pointer of new created object
    BTNode<int> *NewNode  = new BTNode<int>(X);

    
    while(Loc != NULL){
        Par = Loc;
        if(X > Loc->data){
            Loc = (Loc->right);            
        }else{
            Loc = (Loc->left);            
        }
    }
    if(Par == NULL){
        (*TreePtr) = NewNode;
    }else if(X > Par->data){
        Par->right = NewNode; 
    }else{
        Par->left = NewNode; 
    }
    return;

}

void BST_Traverse_Preorder_Recursive(BTNode<int> *Tree){
    if(Tree == NULL){return;}

    cout << Tree->data << " ";
    BST_Traverse_Preorder_Recursive(Tree->left);
    BST_Traverse_Preorder_Recursive(Tree->right);

}

void BST_Traverse_Preorder_Iterative(BTNode<int> *Tree){
    if(Tree == NULL){return;}

    // stack of datatype "BTNode" again whose datatype is int;
    stack <BTNode<int>*> stk;
    stk.push(Tree);
    while(!stk.empty()){
        BTNode<int> *node = stk.top();
        stk.pop();

        cout << node->data << " ";
        if(node->right != NULL){stk.push(node->right);}
        if(node->left != NULL){stk.push(node->left);}
    }
}

void BST_Traverse_Inorder_Iterative(BTNode<int> *Tree){
    stack<BTNode<int>*> stk;
    
    BTNode<int> *Loc = Tree;
    stk.push(Loc);
    while (){
    }
    


}



int main(){
    int t, n, temp1;
    BTNode<int> *Tree = NULL;
    cin >> t;

    for(int i = 0; i < t; i++){
        cin >> n;

        for(int i = 0; i < n; i++){
            cin >> temp1;
            BST_Insert(&Tree, temp1);
            
        }
    }
    BST_Traverse_Preorder_Iterative(Tree);


}
