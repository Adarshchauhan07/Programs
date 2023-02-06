#include<iostream>
using namespace std;
int main(){
    int n1=8;
    int n2=n1;
    n1-=1;
    for(int j=0;j<(2*n2)-1;j++){
        cout<<"*";
    }
    cout<<endl;
    for(int i=0;i<n1;i++){
        for(int j=0;j<(2*n2)-1;j++){
            if((i+j>=n2-1 && j<n2) || (j-i<=n1 && j>n1)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<n1-1;i++){
        for(int j=0;j<(2*n2)-1;j++){
            if((j<n2 && j-i>=2) || (i+j<=12 && j>=n2)){
                cout<<" ";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
    } 
    for(int j=0;j<(2*n2)-1;j++){
        cout<<"*";
    }
}
