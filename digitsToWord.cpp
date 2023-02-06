#include<bits/stdc++.h>
using namespace std;
string str[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
string digittoword(int n,int val){
    if(val<0){
        return 0;
    }
    int st=n%10;
    val=n/10;
    cout<<str[st];
    digittoword(n,val);
    return 0;
}
int main(){
    int n;cin>>n;
    int val(1);
    digittoword(n,val);
}