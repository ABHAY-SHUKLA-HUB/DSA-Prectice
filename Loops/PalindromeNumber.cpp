#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int original=n;
    int rev=0;
    while(n!=0){
        rev = (rev*10) + n%10;
        n=n/10;
    } 
    if (original < 0) {
        cout << "Not Palindrome";
    }
    else if(original==rev){
        cout<<"Palindrome";
    }  
    else{
        cout<<"Not Palindrome";
    }
}


// second method

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     if(n < 0){
//         cout << "Not Palindrome";
//         return 0;
//     }

//     int original = n;
//     int rev = 0;

//     while(n != 0){
//         rev = rev * 10 + n % 10;
//         n /= 10;
//     }

//     if(original == rev)
//         cout << "Palindrome";
//     else
//         cout << "Not Palindrome";

//     return 0;
// }