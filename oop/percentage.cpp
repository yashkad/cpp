#include <iostream>
using namespace std;


int main() {
    int n;
    cout<<"Enter minutes : ";
    cin>>n;
    cout<<endl<< (n/60)<<" hr "<<(n%60)<<" min"<<endl;

    return 0;
}