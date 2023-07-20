#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int cnt(0);
    for(int i=0;i<=5;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cnt=i;
        for(int j=1;j<=i;j++){
            cout<<cnt++;
        }
        cnt=2*(i-1);
        for(int j=1;j<i;j++){
            cout<<cnt--;
        }
        cout<<endl;
    }
}