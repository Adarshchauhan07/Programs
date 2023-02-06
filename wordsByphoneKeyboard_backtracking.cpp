#include<bits/stdc++.h>
using namespace std;
vector<string>final;
void fun(int index,string ans,string input,string map[]){
    if(index>=input.length()){
        final.push_back(ans);

        return;
    }
    int num=input[index]-'0';
    string str=map[num];
    for(int i=0;i<str.length();i++){
        ans.push_back(str[i]);
        fun(index+1,ans,input,map);
        ans.pop_back();
    }
}
int main(){
    string map[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string ans,input;
    getline(cin,input);
    if(input==""){
        cout<<"";
        return 0;
    }
    fun(0,ans,input,map);
    for(int i=0;i<final.size();i++){
        cout<<final[i]<<" ";
    }
    // cout<<endl<<final.size();
}