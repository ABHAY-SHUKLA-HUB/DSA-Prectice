#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    int sum=0;
    double avg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    avg =(double)sum/n;
    cout<<avg;
}