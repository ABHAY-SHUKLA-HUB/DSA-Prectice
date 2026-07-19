#include<iostream>
using namespace std;
void table(int n){
    for(int i=n;i<=n*10;i=i+n){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    table(n);
}


//Method 2nd
// for(int i = 1; i <= 10; i++){
//     cout << n * i << endl;
// }                                