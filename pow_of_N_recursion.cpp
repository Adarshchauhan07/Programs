#include<bits/stdc++.h>
using namespace std;
int fn(int i,int pow){
    if(pow<=0){
        return 1;
    }
    return i*(fn(i,pow-1));

}
int main(){
    int n;cin>>n;
    int pow;cin>>pow;
    cout<<fn(n,pow);
}