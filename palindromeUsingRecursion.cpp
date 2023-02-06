#include<bits/stdc++.h>
using namespace std;
void palindrome(string str,int i, int j){
    if(i>=j){
        cout<<"palindrome";
        return ;
    }
    if(str[i]!=str[j]){
        cout<<"not palindrome";
        return;
    }
    palindrome(str,++i,--j);
}
int main(){
    string str;
    getline(cin,str);
    int size=str.size();
    palindrome(str,0,size-1);
}