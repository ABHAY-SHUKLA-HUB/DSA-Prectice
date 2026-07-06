#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Integer: ";
    cin>>n;
    if(n%5==0 && n%11==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
    return 0;
}