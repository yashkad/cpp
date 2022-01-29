#include <iostream>
#include <string>
using namespace std;

// Per >= 65 and per <=80 “A”
// Per > =50 and per <=65 “B”
// Per >= 42 and per <=50 “C”
// Per < 42 “Fail”

int SUBJECTS = 5, outof;
float percentage,total;

string getGrade() {
    if(percentage >= 65) 
        return "A";
    if(percentage >= 50 && percentage < 65)
        return "B";
    if(percentage >= 42 && percentage <50)
        return "C";
    if(percentage < 42)
        return "FAIL";
    return "";
}

void scanAndCalculate(float* arr) {
    cout<<"------------------------"<<endl;
    for(int i=0;i<5;i++) {
        cin>>arr[i];
        total += arr[i];
    }
    cout<<"------------------------"<<endl;

    cout<<endl<<"Total Matks : "<<total<<endl;
    percentage = (total / (outof*SUBJECTS)) * 100;
    cout<<"Percentage : "<<percentage<<"%"<<endl;
    cout<<"Grade : "<<getGrade();
}



int main() {
    float arr[SUBJECTS];
    cout<<"Enter outof marks for subject :"<<endl;
    cin>>outof;
    cout<<"\nEnter marks for "<<SUBJECTS<<" subjects \n"<<endl;
    scanAndCalculate(arr);

    return 0;
}