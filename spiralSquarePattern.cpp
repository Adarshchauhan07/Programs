#include<iostream>
using namespace std;
int main(){
    int n;cin>>n;
    int arr[n][n];
    int top(0);
    int left(0);
    int right(n-1);
    int bottom(n-1);
    int cnt(1);
    while(n--){
        for(int i=left;i<=right;i++){
            arr[top][i]=cnt++;
        }
        for(int i=top+1;i<=bottom;i++){
            arr[i][right]=cnt++;
        }
        for(int i=right-1;i>=left;i--){
            arr[bottom][i]=cnt++;
        }
        for(int i=bottom-1;i>=top+1;i--){
            arr[i][left]=cnt++;
        }
        ++left;
        ++top;
        --right;
        --bottom;
    }
    n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}