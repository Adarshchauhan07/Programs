#include<bits/stdc++.h>
using namespace std;
int finalmin(vector<int> ct1,int a){
    int rtn(0);
    for(int i=0;i<ct1.size();i++){
        if(ct1[i]==a){
            rtn=i;
        }
    }
return rtn;
}
int min(vector<int> &bt,int &a){
    int min=INT_MAX;
    int minimum(0);
    for(int i=0;i<=a;i++){
        if(min>bt[i]){
            if(bt[i]!=0){
                min=bt[i];
                minimum=i;
            }
        }
    }
return minimum;
}
int main(){
    int size;cin>>size;
    int s=size;
    vector<int>pno,at,bt,bt1;
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            pno.push_back(x);
        }
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            at.push_back(x);
        }
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            bt.push_back(x);
        }
    int a=at[0]-1;
    int i=at[0]+1;
    int num(0);
    vector<int>ct1,ct2,ct,tat,wt;
    bt1=bt;
    for(int i=0;i<at.size();i++){
        num+=bt[i];
    }
    int num1=num;
    while(num--){
        int x=min(bt,a);
        bt[x]--;
        ct1.push_back(pno[x]);
        ct2.push_back(i);
        if(a<size-1){
            ++a;
        }
        ++i;
    }
    for(int i=pno[0];i<=pno.size();i++){
        int x=finalmin(ct1,i);
        ct.push_back(ct2[x]);
    }
    float avtat(0),avwt(0);
    for(int i=0;i<pno.size();i++){
        tat.push_back(ct[i]-at[i]);
        wt.push_back(tat[i]-bt1[i]);
        avtat+=tat[i];
        avwt+=wt[i];
    }
    avtat/=at.size();
    avwt/=at.size();
    cout<<"AVERAGE TAT IS "<<avtat<<endl;   
    cout<<"AVERAGE WT IS "<<avwt<<endl;   
}