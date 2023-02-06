#include<iostream>
using namespace std;
int main(){
    int n=6;
    for(int i=0;i<2*n-2;i++){
        for(int j=0;j<2*n-2;j++){
            if(i+j==n && i!=0 && i!=n+2){
                cout<<char(64+i);
            }
            else{
                cout<<"+";
            }
        }cout<<endl;
    }
}