#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x(0);
    for(int i=0;i<size;i++){
        x+=arr[i]*pow(10,size-i-1);
    }
    cout<<x;
}