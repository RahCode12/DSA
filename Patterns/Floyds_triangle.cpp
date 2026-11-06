#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the n value: ";
    cin>>n;
    int value = 0;

    for(int i{};i<n;i++){
        for(int j{};j<=i;j++){
            value++;
            cout<<value<<" ";
        }
        cout<<"\n";
    }

    
}