#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={64,25,12,22,11};
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                // swap(arr[i]>arr[j]);
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}