#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        this->data=value;
        this->next=nullptr;
    }
};

void insertFirst(Node* &head, int value){
    Node* current=new Node(value);
    current->next=head;
    head=current;
}

void insertLast(Node* &head, int value){
    Node* current=new Node(value);

    if(head==nullptr){
        head=current;
        return;
    }

    Node* temp=head;

    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=current;
}

void printLL(Node* head){
    Node* current=head;

    while(current!=nullptr){
        cout<<current->data<<"->";
        current=current->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head=nullptr;

    insertLast(head,10);
    insertLast(head,20);
    insertLast(head,30);
    printLL(head);
    cout<<"after inserting 100 at first: "<<endl;
    insertFirst(head,100);
    printLL(head);
}