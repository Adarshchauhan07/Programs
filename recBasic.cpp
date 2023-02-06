#include<bits/stdc++.h>
using namespace std;
int rev(string str,int st, int size){
    if(size<st){
        cout<<"palindrome number";
        return 0;
    }
    if(str[st]!=str[size]){
        cout<<"not palindrome number";
        return 0;
    }
    rev(str,st+1,size-1);
    return 0;
}
int main(){
    int st(0);
    string str;
    getline(cin,str);
    int size=(str.size()-1);
    rev(str,st,size);
}