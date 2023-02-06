#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;
void subsetfn(int i; vector<int> &nums; vector<int> &finalAns){
    if(i==nums.size()){
        subsets.push_back(finalAns);
        return;
    }
    subsetfn(i+1,nums,finalAns);

    finalAns.push_back(nums[i]);
    subsetfn(i+1,nums,finalAns);
    finalAns.pop_back();
}
int main(){
    vector<int>finalAns;
    vector<int>nums;
    int size;cin>>size;
    while(size--){
        int x;cin>>x;
        nums.push_back(x);
    }

    subsetfn(0,nums,finalAns);

    for(int i=0;i<subsets.size();i++){
        for(int j=0;j<subsets[i].size();j++){
            cout<<subsets[i][j]<<" ";
        }
        cout<<endl;
    }
}