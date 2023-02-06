#include<iostream>
using namespace std;
int main(){
    int n(5);
        for(int i=n;i>0;i--){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;    
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;    
    }

}