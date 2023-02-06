#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,temp=0;
    int n;cin>>n;
    cout<<a<<" ";
    for(int i=0;i<n-1;i++){
        cout<<b<<" ";
        temp=b;
        b=a+b;
        a=temp;
    }
    cout<<endl;
    a=0;
    b=1;
    cout<<a<<" ";
    temp=0;
    do{
        cout<<b<<" ";
        temp=b;
        b=a+b;
        a=temp;
    }   while(n>=b);
}