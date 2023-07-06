#include<iostream>
using namespace std;

class node{
    public:

    int data;
    node* next;

    node(int value){
        data=value;
        next=NULL;
    }
};

void insertAtTail(node* &head, int value){
    node* n=new node(value);

    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;
}

void displayLL(node* head){
    node* n=head;

    while(n!=NULL){
        cout<<n->data<<"->";
        n=n->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,3);
    insertAtTail(head,5);

    displayLL(head);

}