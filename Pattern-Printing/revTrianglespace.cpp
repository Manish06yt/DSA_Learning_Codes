#include<iostream>
using namespace std;

int main(){

    int total_rows;
    cin>>total_rows;

    for(int row=1; row<=total_rows;row++){
        //for space
        for(int col=1;col<=row-1;col++)
            cout<<" ";

        for(int col=1;col<=total_rows-row+1;col++)
            cout<<"*";

        cout<<endl;
    }
    return 0;
}