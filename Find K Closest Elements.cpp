#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    vector<int>arr{1, 2, 3, 4, 5};

    vector<pair<int,int>>vtr;

    for(int i=0;i<arr.size();i++){
        vtr.push_back({ (abs(arr[i]-x)), arr[i]});
    }
    
    sort(vtr.begin(), vtr.end());

    arr.erase(arr.begin(), arr.end());
    for(int i=0;i<k;i++){
        arr.push_back(vtr[i].second);
    }

    sort(arr.begin(), arr.end());
    
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}