#include<bits/stdc++.h>

using namespace std;

class node{
    public:
        int data;
        node* next;
        node(){
            data=0;
            next=NULL;
        }
        node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Linkedlist{
    node* head;
    public:
        Linkedlist(){head=NULL;}
        void insertnode(int);
        int data1 = head->data;


};

void Linkedlist::insertnode(int data){
    node* newnode=new node(data);
    if(head==NULL){
        newnode=head;
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp->next=newnode;
    }
}

int main(){
    Linkedlist l;
    int data;
    cin>>data;
    l.insertnode(data);
    cout<<l.data1<<endl;
    return 0;
}