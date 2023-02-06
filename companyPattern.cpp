#include<iostream>
using namespace std;
int main(){
    int n(5);
    for(int i=0;i<n+2;i++){
        for(int j=0;j<=i && i<=(n+2)/2;j++){
            cout<<"*";
        }
        for(int j=0;j<=n-i+1 && i>(n+2)/2;j++){
            cout<<"*";
        }
        for(int j=0;j<n-i+n && i!=(n+2)/2 && i<=(n+2)/2;j++){
            cout<<" ";
        }
        for(int j=0;j<n+2;j++){
            if(i==(n+2)/2){
                cout<<"@";
            }
        }
        if(i>(n+2)/2){
            for(int j=(n+2)/2;j<i+n+2;j++){
                cout<<" ";
            }
        }
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}