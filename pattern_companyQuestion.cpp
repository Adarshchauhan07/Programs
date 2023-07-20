#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(1);
    int sec_cnt(n*n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<"_"<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<cnt++<<" ";
        }


        // int val(0);
        int val=sec_cnt;
        for(int j=0;j<i;j++){
            cout<<val++<<" ";
        }
        if(i!=0){
            sec_cnt=sec_cnt-(i+1);
        }
        

        cout<<endl;
    }
}