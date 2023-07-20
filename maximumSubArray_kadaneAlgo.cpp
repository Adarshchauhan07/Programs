#include<bits/stdc++.h>
using namespace std;
int fun(vector<int>vtr){
    int st=INT_MIN;
    int end=0;
    for(int i=0;i<vtr.size();i++){
        end=end+vtr[i];
        if(st<end){
            st=end;
        }
        if(end<0){
            end=0;
        }
    }
    return st;
} 
int main(){
    vector<int>vtr{1,7,-7,90};
    int temp=fun(vtr);
    cout<<temp;
    vector<int>vtr1(3,0);    
}