#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    while(n!=0){
        if(n%2==0){
            even++;
            n=n/10;
        }
        else{
            odd++;
            n=n/10;
        }
       
    }
    cout<<even<<endl<<odd;
    return 0;
}


// second method
// while(n != 0){

//     int digit = n % 10;

//     if(digit % 2 == 0)
//         even++;
//     else
//         odd++;

//     n /= 10;
// }