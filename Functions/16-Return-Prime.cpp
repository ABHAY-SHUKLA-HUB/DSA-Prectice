#include<iostream>
using namespace std;
bool isPrime(int n){
    bool flag=false;
    if(n<=1){
        return false; 
    }
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            flag=true;
            break;
        }
    }
    if(flag==true){
        return false;
    }
    else{
        return true;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not Prime Number";
    }
    return 0;
}