#include<iostream>
using namespace std;
void grade(int grade){
    switch(grade/10){
        case (9):
            cout<<"A"<<endl;
            break;
        case (8):
            cout<<"B"<<endl;
            break;
        case (7):
            cout<<"C"<<endl;
            break;
        case (6):
            cout<<"D"<<endl;
            break;
        default:
            cout<<"F"<<endl;
            break;

    }
    // if(grade>=90){
    //     cout<<"A"<<endl;
    // }
    // else if(grade >=80){
    //     cout<<"B"<<endl;
    // }
    // else if(grade >=70){
    //     cout<<"C"<<endl;
    // }
    // else if(grade >=60){
    //     cout<<"D"<<endl;
    // }
    // else if(grade <60){
    //     cout<<"F"<<endl;
    // }
    // else{
    //     cout<<"invalid input"<<endl;
    // }
    // return;
}
int main(){
    int num;cin>>num;
    grade(num);
}