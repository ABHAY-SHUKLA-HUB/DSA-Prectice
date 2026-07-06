#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if((n<=999 && n>=100) || (n <= -100 && n >= -999)){
        cout<<"3-Digit Number";
    }
    else{
        cout<<"Not 3-Digit NUmber";
    }
}