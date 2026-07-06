#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter Age: ";
    cin>>age;
    if(age>=18){
        cout<<"Eligible to Vote";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;
}

