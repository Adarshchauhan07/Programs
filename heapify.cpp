#include<iostream>
using namespace std;
void heapify(int arr[],int n, int i){
    int parent=i;
    int left=i*2;
    int right=(i*2)+1;
    if(left<=n && arr[parent]<arr[left]){
        parent=left;
    }
    if(right<=n && arr[parent]<arr[right]){
        parent=right;
    }
    if(parent!=i){
        swap(arr[i],arr[parent]);
        heapify(arr,n,parent);
    }
}
void heap(int arr[], int n){
    int size=n;
    while(size>1){
        swap(arr[size],arr[1]);
        size--;
        heapify(arr,size,1);
    }
}
int main(){
    int n;cin>>n;
    int arr[n+1];
    arr[0]=-1;
    for(int i=1;i<=n;i++){    
        cin>>arr[i];
    }
    for(int i=n/2;i>0;i--){
        heapify(arr,n,i);
    }
    heap(arr,n);
    for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
    }
}