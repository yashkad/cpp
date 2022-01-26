#include <iostream>
using namespace std;

const int size = 100;

int stack[size], top = -1, head = -1;

void push(){
    int value;
    cout<<"Enter value"<<endl;
    cin>>value;

    if(top==-1){
        top += 1;
        stack[top] = value;
        head = 0;
        return;
    }
    else if(top+1 == size){
        cout<<"stack is full";
        return;
    }
    top++;
    stack[top] = value;
}

void pop(){
    if(top<=0) cout<<"Stack was empty";
    stack[top] = -1;
    top--;
}

void display(){
    cout<<"\n--------------------------"<<endl;
    for(int i=0;i<=top;i++){
        cout<<stack[i]<<endl;
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
    if(choice == 1) push();
    if(choice == 2) {pop();display();}
    if(choice == 3) display();
}

int main(){
    int choice;
    while(choice!=4){
        menu();
        cin>>choice;
        
        if(choice == 4 || choice<0) break;

        action(choice);
    }
    return 0;
}