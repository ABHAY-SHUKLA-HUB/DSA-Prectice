#include<iostream>
using namespace std;
void prime(int n){
    bool flag=false;
    if(n <= 1){
    cout << "Not Prime";
    return;
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"Composite Number";
    }
    else{
        cout<<"Prime Number";
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);    
}