// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
      
        Rearrange( arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} // } Driver Code Ends




void Rearrange(int arr[], int n)
{
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            swap(arr[i],arr[x]);
            x++;
        }
    }
    // int x=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>0){
    //         swap(arr[i],arr[x]);
    //         x++;
    //     }
    // }
}