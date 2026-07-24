#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of Array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int index=-1;
    int key;
    cout<<"Enter key Value: ";
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index=i;
            break;
        }
    }
    cout<<index;
    return 0;
    
}