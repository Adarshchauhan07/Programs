#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){

    string a;
    cin>>a;
    // string b="4";
    int s1(0);
    int s2(0);
    s1=a[1]-48;
    s2=a[2]-48;
    int sum=s1*10+s2+12;
    // cout<<sum;
    a[1]=intostr(s2);
    a[2]=s2;
    cout<<a;


    
}