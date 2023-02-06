#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    string morse[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."," "};
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
        if((int(str[i]))<97 || int(str[i])>122){
            if(int(str[i])!=32){
                str.erase(i,1);
            }
        }
    }
    // cout<<str;
    for(int i=0;i<str.length();i++){
        str[i]=tolower(str[i]);
        if(str[i]>65 && str[i]<90){
            if(int(str[i])-97!=-65){
                cout<<morse[int(str[i])-97]<<" ";
            }
            else{
                cout<<"/";
            }
        }
        else{
            if(int(str[i])-97!=-65){
                cout<<morse[int(str[i])-97]<<" ";
            }
            else{
                cout<<"/";
            }

        }
    }
}
