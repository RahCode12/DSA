#include <iostream>
using namespace std;

int main() {
    int n{};
    cout<<"Enter the n: ";
    cin>> n;
    for(int i{}; i<n ;i++){
        // for(int j{}; j < (2*n-1);j++){
        //     if(j==(n-1)){
        //         cout<<"*";
        //     }
        //     else{
        //         cout<<" ";
        //     }
        // 
        for(int j{}; j<(n-1-i);j++){
            cout<<"_";
        }
        for(int j{}; j<=2*i;j++){
            cout<<"*";
        }
        cout<<" \n";
    }

    //Different Approch
    return 0;
}