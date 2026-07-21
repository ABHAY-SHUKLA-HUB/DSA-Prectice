#include<iostream>
using namespace std;

bool isArmstrong(int n){
    if(n < 0){
        return false;
    }
    int original = n;
    int temp = n;
    int count = 0;
    int sum = 0;

    if(temp == 0){
        count = 1;
    }
    else{
        while(temp != 0){
            count++;
            temp /= 10;
        }
    }

    temp = original;

    while(temp != 0){
        int digit = temp % 10;

        int power = 1;
        for(int i = 1; i <= count; i++){
            power *= digit;
        }

        sum += power;
        temp /= 10;
    }

    if(original == 0){
        sum = 0;
    }

    if(sum == original){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;

    if(isArmstrong(n)){
        cout << "Armstrong Number";
    }
    else{
        cout << "Not Armstrong Number";
    }

    return 0;
}