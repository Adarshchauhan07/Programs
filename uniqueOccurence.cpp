#include<bits/stdc++.h>
using namespace std;
bool reverse(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                return false;
            }
        }
    }
return true;
}
int main(){
    int size;cin>>size;
    int vtr[size];
    for(int i=0;i<size;i++){
        cin>>vtr[i];
    }
    if(reverse(vtr,size)){
        cout<<"true";
    } 
    else{
        cout<<"false";
    }
}