#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<"$";
        }
        cout<<endl;
    }
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            cout<<"$";
        }
        cout<<endl;
    }
}