#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]>'Z'){
            str[i]=str[i]-'a'+65;
        }
    }
    cout<<str;
}