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
    if(i%2==0){
    sum=sum+i;
    i=i+1;
    }
    else {
        i=i+1;
    }
}
cout<<sum;
return 0;
}