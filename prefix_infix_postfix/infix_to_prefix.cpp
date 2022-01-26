#include <iostream>
#include <stack>
using namespace std;

int priority(char op){
    if(op == '^') return 3;
    else if(op == '/' || op == '*') return 2;
    else if(op == '+' || op == '-') return 1;
    else return -1;
}

bool isOperand(char c) {
    if((c>='a' && c<='z') || (c>='A' && c<='Z'))
        return true;
    return false;
}

string reverse(string s) {
    string result;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i] == ')') result += '(';
        else if(s[i] == '(') result +=')';
        else result +=s[i];
    }
    return result;
}

string infixToPrefix(string s) {

    s = reverse(s); // just single line added in prefix rest is same as postfix

    stack<char> myStack;
    string result;

    for(int i=0;i<s.length();i++) {
        if(isOperand(s[i])){
            result += s[i];
        }
        else if(s[i] == '('){
            myStack.push(s[i]);
        }
        else if(s[i] == ')'){
            while((!myStack.empty()) && myStack.top() != '('){
                result += myStack.top();
                myStack.pop();
            }
            if(!myStack.empty()){
                myStack.pop();
            }
        }
        else {
            while(!myStack.empty() && priority(myStack.top())>priority(s[i])) {
                result += myStack.top();
                myStack.pop();
            }
            myStack.push(s[i]);
        }
        
    }

    while(!myStack.empty()) {
        result += myStack.top();
        myStack.pop();
    }
    return result;
}

int main(){

    string infix = "(a-b/c)*(a/k-l)"; 
    // string infix = "a+b*c";
    string ans = infixToPrefix(infix);

    cout<<"infix string : "<<infix<<endl;
    cout<<"Prefix string : "<<ans<<endl;
    // cout<<reverse(infix);
    return 0;
}

