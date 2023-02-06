#include<bits/stdc++.h>
using namespace std;
int divide(int *arr,int st,int end){
    int pivot=arr[st];
    int cnt(0);
    for(int i=st+1;i<=end;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pvtindex=cnt+st;
    swap(arr[pvtindex],arr[st]);
    
    int i(st),j(end);
    while(i < pvtindex && j > pvtindex){
        while(pivot>=arr[i]){
            i++;
        }
        while(pivot<arr[j]){
            j--;
        }
        if(i < pvtindex && j > pvtindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pvtindex;
}
void quicksort(int *arr,int st,int end){
    if(st>=end){
        return ;
    }
    int p=divide(arr,st,end);
    quicksort(arr,st,p-1);
    quicksort(arr,p+1,end);
}
int main(){
    int arr[]={6,5,4,30,2,10};
    quicksort(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}