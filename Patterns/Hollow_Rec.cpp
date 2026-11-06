#include <iostream>
using namespace std;

int main() {
    int n,m{};
    cout<<"Enter the Dimension: "<<endl;
    char temp;
    cin>>m>>temp>>n;
    cout<<m<<n<<endl;

    for(int i{};i<n;i++){
        for(int j{};j<m;j++){
            if(((i*j)==0)||(i==(n-1))||(j==(m-1))){
                cout<<"* ";

            }
            else{
                cout<<"  ";
            }
            
        }
        cout<<endl;
    }


    
    return 0;
}