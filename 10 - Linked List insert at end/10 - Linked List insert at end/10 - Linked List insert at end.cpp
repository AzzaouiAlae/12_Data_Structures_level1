#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* Next;
};

void InsertAtBeginning(Node* &Head, int value)
{
    Node* new_Node = new Node();
    new_Node->value = value;
    new_Node->Next = Head;

    Head = new_Node;
}

void InsertAtEnd(Node*& Head, int value)
{
    Node* New_Node = new Node();

    New_Node->value = value;
    New_Node->Next = NULL;

    if (Head == NULL)
    {        
        Head = New_Node;
        return;
    }

    Node* LastNode = Head;

    while (LastNode->Next != NULL)
    {
        LastNode = LastNode->Next;
    }

    LastNode->Next = New_Node;
}

void PrintNode(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->value << endl;
        Head = Head->Next;
    }
}

int main()
{
    Node* Head = NULL;

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtBeginning(Head, 0);

    PrintNode(Head);
}