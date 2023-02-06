#include<iostream>
using namespace std;
int fn(int arr1[], int arr2[],int x, int y){
    int a(0);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           a=a+(arr1[i][j] * arr2[j][i]);
        }   
    }
return a;
}
int main(){
    int x,y;cin>>x>>y;
    int arr[x][y];
    int arr1[x][y];
    int arr2[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr[i][j];
        }   
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>arr1[i][j];
        }   
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            arr2[i][j]=fn(arr,arr1,i,j);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<arr2[i][j];
        }
    }
    return 0;
}