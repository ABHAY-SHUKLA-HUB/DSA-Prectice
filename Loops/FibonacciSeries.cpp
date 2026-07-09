#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int first=0;
    int second=1;
    int next;
    if(a<0){
        cout<<"invalid";
        return 0;
    }
    if (a == 0) return 0;
    if (a >= 1) cout << first << " ";
    if (a >= 2) cout << second << " ";
    for(int i=2;i<a;i++){
        
        next=first+second;
        cout<<next<<" ";
        first=second;
        second=next;
    }
    return 0;
}