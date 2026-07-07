// Profit or Loss
#include<iostream>
using namespace std;
int main(){
    int buy,sell;
    cin>>buy>>sell;
    if(buy < 0 || sell < 0){
        cout<<"Invalid Input";
    }
    else if(sell>buy){
        cout<<"Profit = "<<(sell-buy);
    }
    else if(buy>sell){
        cout<<"Loss = "<<(buy-sell);
    }
    else{
        cout<<"No loss No profit";
    }
    return 0;
}