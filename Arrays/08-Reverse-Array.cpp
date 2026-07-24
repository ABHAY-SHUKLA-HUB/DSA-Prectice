#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number of array: ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cout<<"Array: ";
        cin>>arr[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}