#include<iostream>
#include<vector>
using namespace std;
int findMaxEle(vector<int>&arr){
    int st=0;
    int end=arr.size()-1;
    int mid(0);

    while(st<=end){
        
        mid=(st+end)/2;
        
        if(arr[st]>arr[mid]){
            end=mid-1;
        }
        else if(arr[mid]<arr[mid+1] && arr[mid]<arr[mid-1] && mid+1<arr.size() && mid-1>0){
            return mid+1;
        }
        else if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] && mid+1<arr.size() && mid-1>0){
            return mid;
        }
        else{
            st=mid+1;
        }

    }
    return -1;
}
int main(){
    vector<int>vtr{12,13,14,15,16,1,2,3,4,5,6,7,8};
    int check =findMaxEle(vtr);
    cout<<vtr[check];
}
