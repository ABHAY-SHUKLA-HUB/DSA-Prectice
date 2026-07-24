#include<iostream>
using namespace std;
#include <cmath>
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int largest = arr[0];
    int secLargest = -1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]>secLargest && arr[i] != largest){
            secLargest = arr[i];
        }
        
    }
    cout<<secLargest;
    
}