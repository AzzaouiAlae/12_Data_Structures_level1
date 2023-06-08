#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
    Node* Prev;
};

void InsertAtEnd(Node* &Head, int Value)
{
    Node* New_Node = new Node();
    New_Node->Value = Value;
    New_Node->Next = NULL;    

    if (Head == NULL)
    {
        Head = New_Node;
        New_Node->Prev = NULL;
        return;
    }

    Node* Last_Node = Head;
    while (Last_Node->Next != NULL)
    {
        Last_Node = Last_Node->Next;
    }
    Last_Node->Next = New_Node;
    New_Node->Prev = Last_Node;
}

void PrintList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
}

void DeletNode(Node* &NodeToDelete, Node* &Head)
{
    if (Head == NULL || NodeToDelete == NULL)
    {
        return;
    }

    if (NodeToDelete == Head)
    {
        Head = Head->Next;
        Head->Prev = NULL;
    }

    if (NodeToDelete->Prev != NULL)
    {
        NodeToDelete->Prev->Next = NodeToDelete->Next;        
    }

    if (NodeToDelete->Next != NULL)
    {
        NodeToDelete->Next->Prev = NodeToDelete->Prev;
    }
    delete NodeToDelete;
}

Node* Find(Node* Head, int Value)
{
    while (Head != NULL)
    {
        if (Head->Value == Value)
            return Head;

        Head = Head->Next;
    }
    return NULL;
}

int main()
{
    Node* Head = NULL;

    InsertAtEnd(Head, 1);
    InsertAtEnd(Head, 2);
    InsertAtEnd(Head, 3);
    InsertAtEnd(Head, 4);
    InsertAtEnd(Head, 5);

    PrintList(Head);

    Node* NodeToDelete = Find(Head, 1);
    cout << "\n\n";
    DeletNode(NodeToDelete, Head);

    PrintList(Head);
}