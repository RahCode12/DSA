#include <iostream>
using namespace std;

int binary(int n){  
    if(n==0) 
        return 0; 
    binary(n/2); 
    cout<<n % 2; 
    return 0; 
}  

int main(){

    int value = 2;
    binary(782);
}   