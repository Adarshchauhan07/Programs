#include<iostream>
using namespace std;
void merge(int arr[],int st,int end){
    int mid=(st+end)/2;
    int len1=mid-st+1;
    int len2=end-mid;
    int first[len1];
    int second[len2];
    int cnt=st;
    for(int i=0;i<len1;i++){
        first[i]=arr[cnt++];
    }
    cnt=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[cnt++];
    }

    //merge two array in sorted order
    cnt=st;
    int index1(0),index2(0);
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[cnt++]=first[index1++];
        }
        else{
            arr[cnt++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[cnt++]=first[index1++];
    }
    while(index2<len2){
        arr[cnt++]=second[index2++];
    }
}
void mergesort(int arr[],int st,int end){
    if(st>=end){
        return ;
    }
    int mid=(st+end)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
    merge(arr,st,end);
}
int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}