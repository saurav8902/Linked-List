#include <iostream>

using namespace std;

//Defining the Node
struct Node {


    int Data_Part;
    Node* pointer_to_next;

};

//Function to Dynamically Create a Node

Node* Create_Node(int Data){

    Node *ptr = new Node;
    ptr->Data_Part = Data ;
    ptr->pointer_to_next = nullptr;

    return ptr;
}

int main(){


    Node *HeadPtr{nullptr}, *TailPtr{nullptr}, *temp{nullptr};
    
    HeadPtr = TailPtr = temp = Create_Node(10);
    
    cout<<"HeadPtr:"<< HeadPtr<<endl;
    cout<<"temp : "<< temp <<endl;
    cout<<"Tailptr:"<< TailPtr;

    delete temp;

    return 0;
}