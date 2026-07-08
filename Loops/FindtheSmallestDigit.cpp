#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int smallest = 9;
    if (n == 0) {
        smallest = 0;
    }
    while(n!=0){
        int digit=n%10;
        if(digit<smallest){
            smallest=digit;
        }
        n=n/10;
    }
    cout<<smallest;
}