#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = nullptr;
    }
};

void insertFirst(Node *&head, int value)
{
    Node *current = new Node(value);
    current->next = head;
    head = current;
}

void insertLast(Node *&head, int value)
{
    Node *current = new Node(value);

    if (head == nullptr)
    {
        head = current;
        return;
    }

    Node *temp = head;

    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = current;
}



void search(Node *head, int element)
{
    Node *current = head;
    int index = 0;
    bool isFound = false;

    while (current != nullptr)
    {
        if (current->data == element)
        {
            isFound = true;
            break;
        }
        current = current->next;
        index++;
    }

    if (isFound)
    {
        cout << "Element found at index: " << index << endl;
        cout<<"\n"<<endl;
    }
    else
    {
        cout << "Element doesn't found in this LinkedList!" << endl;
        cout<<"\n"<<endl;
    }
}

void printLL(Node *head)
{
    Node *current = head;

    while (current != nullptr)
    {
        cout << current->data << "->";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = nullptr;

    // insertLast(head,10);
    // insertLast(head,20);
    // insertLast(head,30);
    // printLL(head);
    // cout<<"after inserting 100 at first: "<<endl;
    // insertFirst(head,100);
    // printLL(head);

    // insertAt(head,500,2);
    // printLL(head);

    int Nodes;
    cout << "How many Nodes?" << endl;
    cin >> Nodes;

    cout << "Enter Node elements: " << endl;
    int array[Nodes];
    for (int i = 0; i < Nodes; i++)
    {
        cin >> array[i];
    }

    for (int x : array)
    {
        insertLast(head, x);
    }

    cout << "\nYour Current LinkedList: " << endl;
    printLL(head);
    cout<<"\n"<<endl;

    while (1)
    {
        int n;
        cout << "Enter an element to search in this linkedlist:" << endl;
        cin >> n;
        search(head, n);
    }
}

// 4 5 7 10 15 18 110 900 1000