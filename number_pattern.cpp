#include<iostream>
using namespace std;
int main(){
    char a='D';
    char x=a;
    for(int i=0;i<4;i++){
        for(int j=0;j<=i;j++){
            cout<<x;
            ++x;
            
        }
        --a;
        x=a;
        cout<<endl;
    }
}