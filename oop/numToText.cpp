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
    if(s == "" || len<= 0 ) return "";

    if(len == 1 ) {
        // cout<< oneDigit[num];
        return " "+oneDigit[num];
    }

    else if(len == 2 && num<20) {
        int a = (int) s[0]-48;
        int b = (int) s[1]-48;
        // cout<<" "+ twoDigitUnderTwenty[ num % 10 ];
        cout<<"inside < 20 : "<<b;
        if(a == 0) return calculate(s.substr(1),len-1);
        return " "+ twoDigitUnderTwenty[b];
    }

    else if(len == 2 && num>19) {
        int a = num / 10;
        int b = num % 10;
        
        // cout<<twoDigit[a]<<" "<<oneDigit[b];
        string ans = " "+twoDigit[a] + " " +oneDigit[b];
        return ans;
    }
    else if(len == 3) {
        int a = (int) (s[0] - 48);
        int b = (int) (s[1] - 48);
        int c = (int) (s[2] - 48);

        string ans ;
        ans = oneDigit[a] + ( a != 0?" hundred ":"" )+ calculate(s.substr(1),len-1);
        return ans;
    }
    else if(len == 4) {
        int a = (int) (s[0] - 48);
        int b = (int) (s[1] - 48);
        int c = (int) (s[2] - 48);
        int d = (int) (s[3] - 48);
        string ans ;

        ans = oneDigit[a] + " thousand " + calculate(s.substr(1),len-1);
        return ans;
    }
}

int main() {
    string s, result;
    
    cout<<"Enter number :"<<endl<<"\t";
    cin>>s;
    result =  calculate( s, s.length());
    cout<<endl<<endl<<result<<endl;

    return 0;
}

/*
    for one digit = oneDigit[ number ]

    for two digit till 19 =  arr [ number %10 ]
    
    2 digit > 19 = twoDigit [ first digit ]  + oneDigit [ last digit]

    3 digit : num[0] hundred + twoDigit(num[1]+num[2]);

    4 digit : num[0] thousand + 3 digit

    5 digit : 12345
    


*/