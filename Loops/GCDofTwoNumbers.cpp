#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a: ";
    cin>>a;
    int b;
    cout<<"Enter b: ";
    cin>>b;
    int gcd=1;
    int smaller;
    if(a<b){
        smaller=a;
    }
    else{
        smaller=b;
    }
    for(int i=1;i<smaller;i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    cout<<gcd;
    return 0;
}