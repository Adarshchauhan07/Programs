#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[100][100];
    // int size;cin>>size;
    int row;cin>>row;
    int col;cin>>col;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(i>j){
                swap(arr[i][j],arr[j][i]);
            }
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}