#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(){
            next = NULL;
        }
        Node(int d){
            data = d;
            next = NULL;
        }

        void push();
        void pop();
        void display();
        bool isEmpty();
};

Node* stack = new Node();
Node* top = NULL;

bool Node :: isEmpty(){
    if(top == NULL) return true;
    return false;
}

void Node :: push(){
    int data;
    cout<<"\tEnter value to enter"<<endl;
    cin>>data;
    Node* temp = new Node(data);

    if(top == NULL) {
        stack = temp;
        temp->next = NULL;
    }
    else{
        temp->next = top;
    }
    top = temp;
}

void Node :: pop(){
    if(isEmpty()){
        cout<<"Stack is empty"<<endl;
        return;
    }
    Node* temp;
    temp = top;
    top = top->next;
    delete(temp);

}

void Node :: display(){
    cout<<"\n--------------------------"<<endl;

    Node* temp;
    temp = top;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
    cout<<"\n--------------------------"<<endl;

}


void menu(){
    cout<<"Enter your choice"<<endl;
    cout<<"1. Push item in Stack"<<endl;
    cout<<"2. Pop item from Stack"<<endl;
    cout<<"3. Display items "<<endl;
    cout<<"4. Exit\n\n"<<endl;
}

void action(int choice){
    if(choice == 1) stack->push();
    if(choice == 2) {
        stack->pop();
        stack->display();
    }
    if(choice == 3) stack->display();
}

int main(){
    int choice;
    while(choice != 4){
        menu();
        cin>>choice;
        action(choice);
    }
    return 0;  
}