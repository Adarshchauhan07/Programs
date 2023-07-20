#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(0);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
                cout<<"*";
            }
            else{
                cout<<j;
            }
        }
        cnt=i-1;
        for(int j=0;j<i;j++){
            if(i-j==1){
                cout<<"*";
            }
            else{
                cout<<cnt--;
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            if(j==1){
                cout<<"*";
            }
            else{
                cout<<j-1;
            }
        }
        cnt=n-i-2;
        for(int j=0;j<=n-i-2;j++){
            if(j+i==n-2){
                cout<<"*";
            }
            else{
                cout<<cnt--;
            }
        }
        cout<<endl;
    }
}