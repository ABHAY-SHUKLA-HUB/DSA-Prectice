#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    while(n!=0){
        product*=(n%10);
        n=n/10;
    }
    cout<<product;

    return 0;
}