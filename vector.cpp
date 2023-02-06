#include<bits/stdc++.h>
using namespace std;
void display(vector<int>a,vector<int>b,int qry){
    for(int i=0;i<qry;i++){
        cout<<a[b[i][1]];
    }
}
int main(){
    int ary;
    int qry;
    cin>>ary>>qry;
    vector<int> vtr1[ary];
    vector<int> vtr2[ary];
    for(int i=0;i<ary;i++){
        int size;
        cin>>size;
        vtr1.push_back(size);
    }
    for(int i=0;i<qry;i++){
        int size;
        cin>>size;
        vtr2.push_back(size);
    }   
    display(vtr1,vtr2,qry);
}