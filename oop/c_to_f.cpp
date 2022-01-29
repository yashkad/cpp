// Write a program to convert the temperature Celsius to Fahrenheit

#include <iostream>
using namespace std;


float f_to_c(float f) {
    return (f - 32)*0.5556;
}

float c_to_f(float c) {
    return (c * 1.8) + 32;
}

float getAngle(float a,float b) {
    if( (a>=90 && b>=90) || (a<=0) || (b<=0)){
        cout<<"Enter valid angle value"<<endl;
        return 0;
    }
    return (180-a-b);
}


int main(){
    // float c;
    // cout<<"Enter temperature to convert :  Celsius to Fahrenheit"<<endl;
    // cin>>c;
    // cout<<"-------------"<<endl;
    // cout<<c<<"°c : "<<c_to_f(c)<<"°F"<<endl;
    
    int a,b;
    cout<<"Enter angle one and two to get third angle"<<endl;
    cin>>a>>b;
    cout<<endl<<getAngle(a,b)<<endl;
    return 0;
}