#include<bits/stdc++.h>
using namespace std;
int swap(int *a,int *b){
    int temp;
    temp=*a;
    a=*b;
    *&b=temp;
}
int main(){
    int a=5,b=10;
    // a=5;
    // b=10;
    cout<<a<<" "<<b<<endl;
    int *x= &a;
    int *y= &b;
    swap(x,y);
    cout<<a<<" "<<b<<endl;
}