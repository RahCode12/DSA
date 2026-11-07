#include <iostream>
using namespace std;

int main() {
    int n{};
    cout<<"Enter n:" ;
    cin>>n;

    for(int i{};i<n;i++){
        for(int j{};j<(n-1-i);j++){
            cout<<"_";
        }
        for(int j{};j<=2*i;j++){
            if(j==0||j==(2*i)){
                cout<<"*";  
            }
            else{
                cout<<"_";
            }
        }
        cout<<"\n";
    }
    for(int i = n-2;i>=0;i--){
        for(int j{};j<(n-1-i);j++){
            cout<<"_";
        }
        for(int j{};j<=2*i;j++){
            if(j==0||j==(2*i)){
                cout<<"*";  
            }
            else{
                cout<<"_";
            }
        }
        cout<<"\n";
    }
    return 0;
}