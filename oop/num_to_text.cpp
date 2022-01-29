// Yash.k
#include <iostream>
#include <string>
using namespace std;


int main() {
    string s;

    string first[] =  {"one","two","three","four",
                        "five","six","seven","eight","nine"};
    string second[] = {"ten","eleven","twelve","thirteen","fourteen",
                       "fifteen","sixteen","seventeen","eighteen","nineteen"};
    string third[] = {"twenty","thirty","fourty","fifty",
                        "sixty","seventy","eighty","ninty"};
    string fourth[] = {"hundred","thousand"};

    cout<<"Enter number : ";
    cin>>s; 

    int len = s.length();
    int num = stoi(s);
    
    if(len == 1) {
        cout<<first[num%10 -1]<<endl;
    }
    else if(len == 2 && num<20) {
        cout<< second[num%20-10]<<endl;
    }
    else if(len==2) {
        int a = (int)(s[0] -48) ; // one way to convert char to int
        int b = num%10;     // getting last digit

        cout<<third[a-2]<<" "<<first[b-1]<<endl;
    }
    else if(len==3) {

    }

    return 0;
}

