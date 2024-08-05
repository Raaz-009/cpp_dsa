#include<iostream>
using namespace std;

int main(){

    int i,j,n;

    cout<<"Enter the number";
    cin>>n;
    i=1;

    while(i<=n){
        j=n;
        while(j>=1){
            cout<<j; 
            j--;
        }
        cout<<endl;
        i=i+1;
    }



}