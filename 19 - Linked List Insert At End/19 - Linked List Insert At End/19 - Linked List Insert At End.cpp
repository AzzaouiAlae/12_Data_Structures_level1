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
    New_Node->Prev = NULL;
    New_Node->Next = NULL;

    if (Head == NULL)
    {
        Head = New_Node;
        return;
    }

    Node* Current = Head;
    while (Current->Next != NULL)
    {
        Current = Current->Next;
    }

    Current->Next = New_Node;
    New_Node->Prev = Current;
}

void PrintList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
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
}