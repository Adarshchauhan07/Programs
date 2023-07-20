#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(1);
    for(int i=0;i<n;i++){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<cnt++;
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    cnt=cnt-n;
    int val=cnt;
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<2*i+1;j++){
            if(j%2==0){
                cout<<val++;
            }
            else{
                cout<<"*";
            }
        }
        cnt=cnt-i;
        val=cnt;
        cout<<endl;
    }
}