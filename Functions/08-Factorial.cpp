#include<iostream>
using namespace std;
void factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
}
int main(){
    int n;
    cin>>n;
    factorial(n);
}