#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

//ascii value for 0-9 is 48-57

    if(ch>=48&&ch<=57){
        cout<<"it is a number"<<endl;
    }

    else if(ch>=65&&ch<=90){ //ascii value for uppercase is 65-90
        cout<<"it is a uppercase"<<endl;

    }

    else if(ch>=97&&ch<=122){ //ascii value for lowercase ius 97-122
        cout<<"it is a lowercase"<<endl;

    }
}