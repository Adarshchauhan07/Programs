#include<iostream>
using namespace std;
int fact(int n){
    int sum(1);
    if(n==0){
        return 1;
    }
    else{
        for(int i=1;i<=n;i++){
            sum*=i;
        }
    }
    return sum;
}
int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                cout<<1<<" ";
            }
            else{
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
            }
        }
        cout<<endl;
    }
}