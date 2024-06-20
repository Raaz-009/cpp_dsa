// to get sum of N numbers

#include<iostream>
using namespace std;

int main(){
    int n,i,sum;
    i=1;
    sum=0;

    cout<<"enter the value of n"<<endl;
    cin>>n;

while(i<=n){
    sum=sum+i;
    i=i+1;
    
}
cout<<sum;
return 0;
}