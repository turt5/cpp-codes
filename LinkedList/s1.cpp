#include<iostream>
using namespace std;

#define null NULL
#define node Node*
#define r return
#define line cout<<"\n"


class Node{
    public:

    int data;
    node next;

    Node(int value){
        this->data=value;
        this->next=null;
    }
};


void insertTail(Node* &head, int value){
    node current=new Node(value);

    if(head==null){
        head=current;
        r;
    }

    Node* temp=head;

    while(temp->next!=null){
        temp=temp->next;
    }


    temp->next=current;
}

void insertHead(Node* &head, int value){
    node current=new Node(value);

    current->next=head;
    head=current;
}
/**
Complete the insertAfter function.
Explantion:

Linked List: 2 3 7 9 15 21 19 75

insertAfter(89, 21)

Linked List: 2 3 7 9 15 21 89 19 75
**/

void insertAfter(Node* &head, int value, int after){
    node current=new Node(value);

    node temp=head;
    

    while(temp->data!=after){
        temp=temp->next;
    }

    if(temp->data==after){
        node nextNode=temp->next;
        temp->next=current;
        current->next=nextNode;
    }else cout<<after<<" is not found in this LinkedList"<<endl;

}

void display(Node* head){
    Node* temp=head;

    while(temp!=null){
        cout<<temp->data<<" ->";
        temp=temp->next;
    }

    cout<<"NULL"<<endl;
}


int main(){
    node head=null;

    insertTail(head,2);
    insertTail(head,3);
    insertTail(head,7);
    insertTail(head,9);
    insertTail(head,15);
    insertTail(head,21);
    insertTail(head,27);

    display(head);

    line;

    insertAfter(head,89,21);
    display(head);
}