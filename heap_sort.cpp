#include<bits/stdc++.h>
using namespace std;
void heapify(int arr[],int size,int i){
    int largest=i;
    int left = 2*i;
    int right = (2*i)+1;
    if(left<size && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<size && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,size,largest);
    }
}
void heapSort(int arr,int size){
    for(int i=0;i<(size/2);i++){
        heapify(arr,size,(size/2)-i);
    }
    for(int i=0;i<(size/2);i++){
        swap(arr[0],arr[size-i]);
        heapify(arr,size,0);
    }
}
int main(){
    int size;cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    heapSort(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}