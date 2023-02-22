#include<bits/stdc++.h>
using namespace std;
void fib(int first, int second,int n){
    int num=first+second;
    if(first>n){
        return;
    }
    cout<<first<<" ";
    fib(second,num,n);
}
int main(){
    int n;cin>>n;
    fib(0,1,n);
}