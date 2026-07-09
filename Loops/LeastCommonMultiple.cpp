#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    cin>>a;
    cin>>b;
    int small;
    int gcd=1;
    if(a>b){
        small=b;
    }
    else{
        small=a;
    }
    for(int i=1;i<=small;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int LCM;
    LCM=(a*b)/gcd;
    cout<<LCM;
    
}