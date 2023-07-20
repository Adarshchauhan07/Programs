#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(){
        this->data=0;
        this->next=NULL;
    }
    node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void insertright(node* &a1,node* &a2, int value){
    if(a1==NULL){
        node* temp=new node(value);
        a1=temp;
        a2=temp;
    }
    else{
        node* temp=new node(value);
        a2->next=temp;
        a2=temp;
    }
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}







void reverse(node* &head){
    node* agla=head;
    node* prev=nullptr;
    while(head!=NULL){
        agla=head->next;
        head->next=prev;
        prev=head;
        head=agla;
    }
    head=prev;
}
node* recursion(node* prev , node* &head, node* &agla){
    if(head==nullptr){
        return prev;
    }
    agla=head->next;
    head->next=prev;
    return recursion(head,agla,agla);
}
int main(){
    node* head=nullptr;
    node* tail=nullptr;
    insertright(head, tail, 1);
    insertright(head, tail, 2);
    insertright(head, tail, 3);
    insertright(head, tail, 4);
    insertright(head, tail, 5);

    cout<<endl;
    print(head);

    cout<<endl;
    node* ptr=NULL;
    recursion(ptr,head,head);

    cout<<endl;
    print(head);
}