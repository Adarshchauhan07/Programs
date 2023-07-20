#include<bits/stdc++.h>
using namespace std;
int search_array(int arr[][4],int n,int m,int target)
{
    int start=0;
    int end=n*m-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        int element = arr[mid/m][mid%m];
        if(element==target)
        {
            return element;
        }
        else if(element>target)
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
        
    }
    return 0;
}

int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    cout<<"enter the target element";
    cout<<endl;
    int target ;
    cin>>target ;
    cout<<search_array(arr,4,4,target);
}