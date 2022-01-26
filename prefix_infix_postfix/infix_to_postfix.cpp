#include <iostream>
#include <string>
using namespace std;

class Node {
    public :
        int data;
        Node* start;
        Node* end;

        Node(){
            stack = NULL;
            end = NULL;
        }

        void push(int d){
            Node* temp;
            temp = start;

        

        }
};

string revExpression(string s ){
    string t ;
    for(int i=s.size()-1 ; i>=0 ; i-- ){
        if(s[i] == '(') t += ")";
        else if(s[i] == ')') t += "(";
        else t += s[i];
    }
    return t;
}



int main(){
    Node* stack;
    stack = new Node();

    stack->push(10);


    return 0;
}