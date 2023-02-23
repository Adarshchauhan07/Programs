#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>vtr;
void find(int n, int m, int key){
    int st=0;
    int end=n*m-1;
    int mid;
    while(st<=end){
        mid=(st+end)/2;
        int indx_i=mid/m;
        int indx_j=mid%m;
        int element=vtr[indx_i][indx_j];
        if(element==key){
            cout<<indx_i<<" "<<indx_j;
            return;
        }
        else if(element>key){
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
}
int main(){
    int n;cin>>n;
    int m;cin>>m;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++){
            int x;cin>>x;
            temp.push_back(x);
        }
        vtr.push_back(temp);
    }

    int key;cin>>key;

    // if(find(n,m,key)){
    //     cout<<"true";
    // }
    // else{
    //     cout<<"false";
    // }
    find(n,m,key);
}