#include<iostream>
using namespace std;
int main(){
    int val;cin>>val;
    fun(val);
    return 0;
}
void fun(int n){
    for(int i=0;i<n;i++){
        cout<<"Adarsh Chauhan"<<endl;
    }
    int tell_me(0);
    cin>>tell_me;
    if(tell_me==0){
        return;
    }
    else{
        fun(tell_me);
    }
}