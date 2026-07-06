#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input Marks: ";
    cin>>n;

    if(n < 0 || n > 100){
    cout << "Invalid Marks";
    }
    else if(n<=100 && n>=90){
        cout<<"A";
    }
    else if(n<=89 && n>=80){
        cout<<"B";
    }
    else if(n<=79 && n>=70){
        cout<<"C";
    }
    else if(n<=69 && n>=60){
        cout<<"D";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}