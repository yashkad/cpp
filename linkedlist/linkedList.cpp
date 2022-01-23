#include <iostream>
using namespace std;

class Node {

    public :
        int data;
        Node* next;

        Node(){
            data = -1;
            next = NULL;
        }
        Node(int d){
            data = d;
            next = NULL;
        }

        void push(int val){
            Node *temp, *yNode ;
            temp = next;

            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new Node(val);
        }

        void pop(){
            Node* temp;
            temp = next;
            
            if(next == NULL) return;

            while(temp->next->next != NULL){
                temp = temp->next;
            }
            temp->next = NULL;
            delete temp->next;

        }

        void display() {
            Node* temp;
            temp = next;
            while(temp != NULL){
                cout<<temp->data<<" => ";
                temp = temp->next;
            }
        }

};

void createList(Node* head){
    int n;
    Node* temp, *yNode;
    temp = head;
    while(n!=-1){
        cout<<"Enter item to add"<<endl;
        cin>>n;
        if(n==-1) break;
        yNode = new Node(n);
        temp->next = yNode;
        temp = temp->next;
    }   
}




void push(Node* head) {
    int n ;
    Node* temp = NULL;
    temp = head;
    cout<<"Enter value of element to Enter into list "<<endl;
    cin>>n;

    while(temp!= NULL){
        cout<<" : "<<temp->data<<endl;
        temp = temp->next ;
    }
    cout<<"temp :"<<temp;


}

int main(){
    Node* head = NULL;
    head = new Node();

    createList(head);
    head->push(555);
    head->display();
    head->pop();
    cout<<endl;
    head->display();
    return 0;
}