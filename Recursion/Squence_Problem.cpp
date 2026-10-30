#include <iostream>

using namespace std;
#define LIMIT = 1000

//Question : 
//For a positive n, fun2(n) prints the values of n, 2n, 4n, 8n ... while the value is smaller than LIMIT. 
//After printing values in increasing order, it prints same numbers again in reverse order. For example 
//fun2(100) prints 100, 200, 400, 800, 800, 400, 200, 100.If n is negative, the function is returned immediately.
 
void squence(int n){
    if(n>1000){ //Check for the Limited Value
        return;
    }
    cout<<n<<endl; //Print initial while the recurive loop is add like (printed at time of push)
    squence(n*2);
    cout<<n<<endl; //Print final while the recursive pop is happening
}

int main(){
    int number{};

    cout << "Enter the Number: "<<endl;
    cin >> number;

    squence(number);
    return 0;

}