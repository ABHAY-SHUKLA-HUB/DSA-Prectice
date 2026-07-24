#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    int key;
    cout<<"Enter Key: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            count++;
        }
    }
    cout<<count;
}