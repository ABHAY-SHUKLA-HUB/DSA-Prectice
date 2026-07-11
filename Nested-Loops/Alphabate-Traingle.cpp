#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n>26||n<=0){
        cout<<"Not Valid";
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
    return 0;
}