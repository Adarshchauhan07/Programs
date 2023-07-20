#include<iostream>
#include<string>
using namespace std;
class hero{
    string name;
    int age;
    int income;

    public:

    void getfn(string str, int age1, int income1){
        name=str;
        age=age1;
        income=income1;
    }
    string setfn(){
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<income<<endl;
        return name;
    }
};
int main(){
    hero arya;
    arya.getfn("Adarsh Chauhan",21, 150000);
    arya.setfn();

    
}