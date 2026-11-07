#include <iostream>
using namespace std;

int gcf(int a,int b){
    return b==0?a:gcf(b,a%b);
}

int main() {
    cout<<gcf(24,12);
    return 0;
}