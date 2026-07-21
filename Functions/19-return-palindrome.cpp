#include<iostream>
using namespace std;
bool isPalindrome(int n){
    int rev = 0;
    int original=n;
    while(n!=0){
        rev=(rev*10) + n%10;
        n=n/10;
    }
    if(original<0){
        return false;
    }
    else if(original==rev){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isPalindrome(n)){
    cout<<"Palindrome";
    }
    else{
    cout<<"Not Palindrome";
    }
}
