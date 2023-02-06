#include<bits/stdc++.h>
using namespace std;
int ans(1);
int rev(int val,int times){
    // int ans(1);
    if(times==0){
        cout<<ans;
        return 0;
    }
    ans*=val;
    rev(val,times-1);
    return 0;
}
int main(){
    int val;cin>>val;
    int pow;cin>>pow;
    rev(val,pow);
}
