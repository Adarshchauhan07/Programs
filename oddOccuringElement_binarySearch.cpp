#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int oddOccuringElement(vector<int> arr){
    int st=0;
    int end=arr.size()-1;
    int mid;
    while(st<=end){
        mid=(st+end)/2;
        int first=arr[mid]^arr[mid+1];
        int second=arr[mid]^arr[mid-1];
        
        if( ((first)!=0) && ((second)!=0) ){
            return mid;
        }
        else if( (mid%2==0 && first==0) || (mid%2!=0 && second==0) ){
            st=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return -1;
}
int main()
{
    vector<int>vtr{1,1,2,2,1};
    int index=oddOccuringElement(vtr);
    cout<<index;
}