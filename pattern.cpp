#include<iostream>
using namespace std;
int fn(int n){
    int cnt(0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;cin>>n;int num(1);
    int cnt(1);int arr[n];
    int x=fn(n);
    arr[0]=x+1;
    x+=1;
    for(int i=1;i<n;i++){
        x=arr[i-1]+i;
        arr[i]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-i;j++){
            cout<<cnt++;
        }
        cout<<"|";
        int a=arr[n-i-1];
        for(int j=0;j<n-i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}