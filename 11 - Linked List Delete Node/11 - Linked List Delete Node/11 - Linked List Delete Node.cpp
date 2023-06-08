#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void InsertAtEnd(Node* &Head, int value)
{
    Node* New_Node = new Node();

    New_Node->Value = value;
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
        cout << Head->Value << endl;
        Head = Head->Next;
    }
}

void DeleteNode(Node*& Head, int value)
{
    if (Head == NULL)
        return;

    Node* Current = Head, * Prev = Head;

    if (Current->Value == value)
    {
        Head = Current->Next;
        delete Current;
        return;
    }

    while (Current != NULL && Current->Value != value)
    {
        Prev = Current;
        Current = Current->Next;
    }

    if (Current != NULL)
    {
        Prev->Next = Current->Next;
        delete Current;
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
    InsertAtEnd(Head, 6);

    cout << "\nLinked List\n";
    PrintNode(Head);

    DeleteNode(Head, 3);
    cout << "\nLinked List after delete\n";    
    PrintNode(Head);

    system("pause>0");
}