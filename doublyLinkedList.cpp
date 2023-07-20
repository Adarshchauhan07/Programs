#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node*next;
    
    node(){
        this->data=0;
        this->prev=NULL;
        this->next=NULL;
    }
    node(int val){
        this->data=val;
        this->prev=NULL;
        this->next=NULL;
    }
};
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void rev(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
}
void insertHead(node* &head, node* &tail, int value){
    node* nodee=new node(value);
    if(head==NULL){
        node* nodee=new node(value);
        head=nodee;
        tail=nodee;
        return;
    }
    node* temp=head;
    nodee->next=head;
    head->prev=nodee;
    head=nodee;

}
void inserttail(node* &head, node* &tail, int value){
    if(head==NULL){
        node* nodee=new node(value);
        head=nodee;
        tail=nodee;
        return;
    }
    node* nodee=new node(value);
    node* temp=head;
    nodee->prev=tail;
    tail->next=nodee;
    tail=nodee;

}
void insertPos(node* &head, node* &tail, int position, int val){
    if(head==NULL){
        node* temp=new node(val);
        head=temp;
        tail=temp;
        return;
    }
    if(position==0){
        insertHead(head, tail, val);
        return ;
    }

    int idx=1;
    node* temp=head;
    node* nodee=new node(val);
    while(idx<position){
        temp=temp->next;
        idx++;
    }
    if(temp==tail){
        inserttail(head, tail, val);
        return;
    }
    nodee->next=temp->next;
    temp->next->prev=nodee;
    temp->next=nodee;
    nodee->prev=temp;


}
void deletenode(node* &head, node* &tail, int position){
    if(head==NULL){
        cout<<"LINKED LIST IS EMPTY"<<endl;
        return;
    }
    if(position==0){
        node* temp=head;
        head=head->next;
        head->prev=NULL;
        delete(temp);
        return;
    }
    int idx=0;
    node* temp=head;
    while(idx<position){
        temp=temp->next;
        idx++;
    }

    if(temp==tail){
        node* temp1=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete(temp1);
        return;

    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete(temp);


}
int main(){
    node* head=nullptr;
    node* tail=nullptr;
    insertHead(head, tail, 170);
    insertHead(head, tail, 7);
    insertPos(head, tail, 0,1);
    insertPos(head, tail, 1,5);
    insertPos(head, tail, 4,200);

    print(head);
    cout<<endl;

    deletenode(head, tail, 4);

    print(head);
    // rev(tail);
}