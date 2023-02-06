#include<bits/stdc++.h>
using namespace std;
int bubbleSort(int arr[],int n){
    // int n=sizeof(afrr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1] && j<n-1){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return 0;
}
int main(){
    int arr[]={12,45,23,51,19,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
}