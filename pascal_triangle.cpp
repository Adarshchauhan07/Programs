#include<iostream>
using namespace std;
long long fact(long long n){
    long long sum(1);
    if(n==0){
        return 1;
    }
    else{
        for(long long i=1;i<=n;i++){
            sum*=i;
        }
    }
    return sum;
}
int main(){
    long long n;cin>>n;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(long long j=0;j<=i;j++){
                cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
}