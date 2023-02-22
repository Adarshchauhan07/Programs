#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[], int st, int end,int key){
    int first(-1),second(-1);
    first=lower_bound (arr.begin(), arr.end(), target);
    second=upper_bound (arr.begin(), arr.end(), target);
    return {first,second};
}
int main(){
    int size;cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int key;cin>>key;

    int check[]= binarySearch(arr,0,size-1,key);
    
    cout<<check[0];
}