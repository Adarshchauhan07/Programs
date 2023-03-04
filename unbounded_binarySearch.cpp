#include<iostream>
#include<vector>
using namespace std;
int find_subarray(vector<int>vtr, int key){
    int i=1;
    if(vtr[0]==key){
        return 0;
    }
    while(vtr[i]<key && i<vtr.size()){
        i*=2;
    }
    return i/2;
}
int binarySearch(vector<int> vtr, int key){
    int val=find_subarray(vtr,key);
    int st=val;
    int end;
    if(val*2>vtr.size()){
        end=vtr.size()-1;
    }
    else{
        end=val*2;
    }
    int mid(0);
    while(st<=end){
        mid=(st+end)/2;
        if(vtr[mid]==key){
            return mid;
        }
        else if(vtr[mid]>key){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int main(){
    int size;cin>>size;
    vector<int>vtr;
    for(int i=0;i<size;i++){
        int x;cin>>x;
        vtr.push_back(x);
    }
    int key;cin>>key;
    int final_ansAt=binarySearch(vtr,key);
    cout<<final_ansAt<<endl;
    cout<<vtr[final_ansAt]<<endl;
}