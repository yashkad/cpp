#include <iostream>
#include <string>
using namespace std;

    string oneDigit[] =  {"", "one","two","three","four",
                        "five","six","seven","eight","nine"};
    string twoDigitUnderTwenty[] = {"ten","eleven","twelve","thirteen","fourteen",
                       "fifteen","sixteen","seventeen","eighteen","nineteen"};
    string twoDigit[] = {"", "","twenty","thirty","fourty","fifty",
                        "sixty","seventy","eighty","ninty"};
    string moreThanThreeDigit[] = {"hundred","thousand"};

string calculate(string s,int len) {
    int num = stoi(s);
    string ans;
    if(s == "" || len<= 0 ) return "";

    if(len == 1 ) {
        return " "+oneDigit[num];
    }

    int a = (int) s[0]-48;
    int b = (int) s[1]-48;
    
     if(len == 2 && num<20) {
        
        if(a == 0) return calculate(s.substr(1),len-1);
        return " "+ twoDigitUnderTwenty[b];
    }

     if(len == 2 && num>19) {
        ans = " "+twoDigit[a] + " " +oneDigit[b];
        return ans;
    }
    
    int c = (int) (s[2] - 48);
    
     if(len == 3) {
        ans = oneDigit[a] + ( a != 0?" hundred ":"" )+ calculate(s.substr(1),len-1);
        return ans;
    }

    int d = (int) (s[3] - 48);

     if(len == 4) {
        ans = oneDigit[a] + (a !=0 ?" thousand ":"") + calculate(s.substr(1),len-1);
        return ans;
    }

    return "";
}

int main() {
    string s, result;
    
    cout<<"Enter number : "<<endl;
    cin>>s;
    result =  calculate( s, s.length());
    cout<<result<<endl;
    for(int i=0;i<999;i++) {
        s = to_string(i);
        cout<<calculate(s,s.length())<<endl;
    }

    return 0;
}
