#include<iostream>
using namespace std;
void sumOfEven(int num){
    int ans(0);
    for(int i=0;i<=num;i+=2){
        // if(i%2==0){
            ans+=i;
        // }
    }
    cout<<ans;
}
int main(){
    int num;cin>>num;
    sumOfEven(num);
    return 0;
}