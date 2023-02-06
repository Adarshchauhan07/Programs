#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(1);
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2!=0){
                cout<<"*"<<" ";
            }
            else{
                cout<<cnt++<<" ";
            }
        }
        cout<<endl;
    }
    // cnt()
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-2*i-1;j++){
            if(j%2!=0){
                cout<<"*"<<" ";
            }
            else{
                cout<<--cnt<<" ";
            }
        }
        cout<<endl;
    }
}