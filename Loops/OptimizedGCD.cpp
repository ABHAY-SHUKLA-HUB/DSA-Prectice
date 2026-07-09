#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int remainder;
    while(b!=0){
        remainder=(a%b);
        a=b;
        b=remainder;
    }
    cout<<a;
}