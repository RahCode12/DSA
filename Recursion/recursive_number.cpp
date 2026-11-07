#include <iostream>
using namespace std;

int print(int n){
    if(!(n)){
        return 0;
    }
    cout<<n<<endl;
    return(print(n-1));

}
void front_print(int n){
    if(n==0){
        return;
    }
    front_print(n-1);
    cout<<n<<" ";
    return;
}
int main() {
    print(10);
    front_print(5);
    return 0;

}
