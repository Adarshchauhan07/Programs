#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<char(j+65)<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<char(i-j+64)<<" ";
        }
        cout<<endl;
    }
}