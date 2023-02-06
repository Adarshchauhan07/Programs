#include<bits/stdc++.h>
using namespace std;
void fun(vector<int>&a,vector<int>&b,vector<int>&c)
{
    for(int i=1;i<a.size();i++)
    {
        for(int j=1;j<a.size();j++)
        {
            if(a[i]<a[j]){
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
                int temp1;
                temp1=b[i];
                b[i]=b[j];
                b[j]=temp1;
                int temp3;
                temp3=c[i];
                c[i]=c[j];
                c[j]=temp3;
            }
        }
    }
}
int main(){
    int size;cin>>size;
    vector<int>a,b,c;
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            a.push_back(x);
        }
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            b.push_back(x);
        }
    for(int i=0;i<size;i++){
            int x;
            cin>>x;
            c.push_back(x);
        }
    fun(c,a,b);
    vector<int> ct,ct1,ct2,tat,wt;
    ct.push_back(c[0]);
    ct1.push_back(a[0]);
    for(int i=1;i<a.size();i++){
        int x;x=ct[i-1]+c[i];
        ct.push_back(x);
        ct1.push_back(a[i]);
    }
    fun(ct,ct1,a);
    ct2=ct;
    for(int i=0;i<a.size();i++){
        tat.push_back(ct2[i]-b[i]);
        wt.push_back(tat[i]-c[i]);
    } 
    float x(0),y(0);
    for(int i=0;i<a.size();i++){
        x+=tat[i];
        y+=wt[i];
    } 
    x/=a.size();         
    y/=a.size();         
    cout<<"average TAT is "<<x<<endl<<"average WT is "<<y; 
}