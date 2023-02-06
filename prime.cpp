#include<bits/stdc++.h>
using namespace std;
int prime(int n,int  & cnt){
    for(int i=2;i<(n/2);i++){
        if(n%i==0){
         return 0;
        }
    }
cout<<n<<" is prime"<<endl;
cnt++;
return 0;
}
int main(){
    int a,b;
    cin>>a>>b;
    int cnt(0);
    for(int i=a;i<=b;i++){
        prime(i,cnt);
    }
    cout<<cnt;
return 0;
}