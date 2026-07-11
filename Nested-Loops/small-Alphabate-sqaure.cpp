#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>26){
        cout<<"Not valid";
        return 0;
    }
    for(int i=1;i<=n; i++){
        for(int j=1;j<=n;j++){
            cout<<char(j+96)<<" ";
        }
        cout<<endl;
    }
    return 0;
}