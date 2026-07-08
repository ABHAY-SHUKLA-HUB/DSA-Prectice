#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int product=1;
    if(n == 0){
    cout << 0;
    return 0;
    }
    while(n!=0){
        product*=(n%10);
        n=n/10;
    }
    cout<<product;

    return 0;
}