#include<bits/stdc++.h>
using namespace std;
class hero{
    private:
    int health;

    public:
    
    hero(){
        cout<<"first called!!!"<<endl;
    }

    hero(int health){
        this -> health=health;
        cout<<"one constructor called"<<endl;
        cout<<health<<endl;
    }

    hero(int health, string str){
        cout<<"two variable constructor"<<endl;
        this -> health=health;
        cout<<health<<endl;
        cout<<str<<endl;
    }

    void sethealth(int num){
        health=num;
    }
    int gethealth(){
        return health;
    }
    string level;
    bool ticket;

    void print(){
        cout<<level<<endl<<ticket<<endl;
    }
};
int main(){
    hero Adarsh;
    hero arya(5);
    hero last(24,"string");
    
}