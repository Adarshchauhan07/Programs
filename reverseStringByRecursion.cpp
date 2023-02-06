#include<bits/stdc++.h>
using namespace std;
void reverse(string &str,int st){
    if(st>=(str.size()/2)){
        return;
    }
    swap(str[st],str[str.size()-1-st]);
    reverse(str,st+1);
}
int main(){
    string str;
    getline(cin,str);
    reverse(str,0);
    cout<<str;
}