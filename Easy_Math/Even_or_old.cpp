#include <iostream>
using namespace std;

int main(){
    int n{};
    cout<<"Enter the Number to check : ";
    cin>>n;

    if((n&1) == 0){
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }

}