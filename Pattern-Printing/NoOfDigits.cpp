#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int Digit=0;
    while(n){

        Digit++;
        n = n/10;
    }
    cout<<Digit;
    return 0;
}