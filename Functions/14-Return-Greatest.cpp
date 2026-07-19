#include<iostream>
using namespace std;
int greatest(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<greatest(a,b);
}