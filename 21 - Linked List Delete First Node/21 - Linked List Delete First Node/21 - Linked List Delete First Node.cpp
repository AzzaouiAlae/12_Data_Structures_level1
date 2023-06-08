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
        New_Node->Prev = NULL;
        Head = New_Node;
        return;
    }

    Node* Last_Node = Head;
    while (Last_Node->Next != NULL)
    {
        Last_Node = Last_Node->Next;
    }
    New_Node->Prev = Last_Node;
    Last_Node->Next = New_Node;
}

void PrintList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
}

void DeleteFirstNode(Node*& Head)
{
    if (Head == NULL)
        return; 

    Node* Temp = Head;
    Temp->Prev = NULL;
    Head = Temp->Next;
    delete Temp;
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

    DeleteFirstNode(Head);
    cout << "\n\n";
    PrintList(Head);

    DeleteFirstNode(Head);
    cout << "\n\n";
    PrintList(Head);

    DeleteFirstNode(Head);
    cout << "\n\n";
    PrintList(Head);

 

    
}