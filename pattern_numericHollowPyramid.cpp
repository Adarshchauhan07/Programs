#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(1);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i+j==n+1){
                cout<<1<<" ";
            }
            else if(j-i==n-1){
                cout<<i<<" ";
            }
            else if(i==n && j%2!=0){
                cout<<cnt++<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}