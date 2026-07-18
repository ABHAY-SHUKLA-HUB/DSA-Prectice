#include<iostream>
using namespace std;
void greatest(int a, int b)
{
    if(a > b)
        cout << a;
    else
        cout << b;
}
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    greatest(a,b);
}