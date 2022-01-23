#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
};  


void createList(Node* head,Node* end){
    int n;
    Node *temp , *newNode;
    temp = head;

    cout<<"Enter number to add in the list. (-1 to stop adding)\n";
    while(n!=-1){
        cin>>n;
        if(n<0) return;
        newNode = new Node();
        newNode->data = n;
        newNode->next = NULL;

        temp->next = newNode;
        temp = newNode;

        cout<<"Enter new value \n";
    }
    end = temp;

}

void deleteList(Node* head,Node* end){
    // head = NULL;
    // head->next = NULL;
    // end = NULL;
    // end->next = NULL;
    delete head;
    delete end;
}

void printList(Node* head){
    Node* temp;
    temp = head->next;

    cout<<"----------\n";
    while(temp){
        cout<<temp->data<<"\n";
        temp = temp->next;
    }
    cout<<"\n----------";

}

void add(Node* head,Node* end){
    int item = 0;
    cout<<"Enter value of item to add : \n";
    cin>>item;

    Node* newItem;
    newItem = new Node();
    newItem->data = item;
    newItem->next = NULL;

    end->next = newItem;
    end = newItem;


}

void remove(Node* head){
    
}

void showMenu(){
    cout<<"Enter your choice\n";
    cout<<"1. Create new list"<<"\n";
    cout<<"2. Delete list"<<"\n";
    cout<<"3. Add element"<<"\n";
    cout<<"4. Remove element"<<"\n";
    cout<<"5. Display list"<<"\n";
    cout<<"6. Exit"<<"\n";   
}

void callAction(int choice, Node* head,Node* end){
    if(choice == 1) {
        createList(head,end);
        return;
    }
    if(choice == 2){
        deleteList(head,end);
        return;
    }
    if(choice == 3){
        add(head,end);
        return;
    }
    if(choice == 4){
        remove(head);
        return;
    }
    if(choice == 5){
        printList(head);
        return;
    }
}

int main(){
    
    Node* head = NULL;
    Node* end = NULL;
    head = new Node();
    end = new Node();

    head->next = NULL;

    int choice;
    while(choice!=6){
        showMenu();
        cin>>choice;
        callAction(choice,head,end);   
    }

    return 0;
}
