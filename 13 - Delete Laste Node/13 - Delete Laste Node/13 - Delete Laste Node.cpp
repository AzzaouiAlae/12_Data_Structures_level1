#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* Next;
};

void InsertAtEnd(Node* &Head, int value)
{
    Node* New_Node = new Node();
    New_Node->value = value;
    New_Node->Next = NULL;

    if (Head == NULL)
    {
        Head = New_Node;
        return;
    }

    Node* Last_Node = Head;
    while (Last_Node->Next != NULL)
    {
        Last_Node = Last_Node->Next;
    }
    Last_Node->Next = New_Node;
}

void PrintList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->value << endl;
        Head = Head->Next;
    }
}

void DeleteLastNode(Node* &Head)
{
    if (Head == NULL)
        return;

    if (Head->Next == NULL)
    {
        Head = NULL;
        return;
    }
        

    Node* Prev_Node = Head;
    Node* Last_Node = Head;
    while (Last_Node->Next != NULL)
    {
        Prev_Node = Last_Node;
        Last_Node = Last_Node->Next;
    }
    Prev_Node->Next = NULL;
    delete Last_Node;
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

    DeleteLastNode(Head);
    cout << endl;
    PrintList(Head);

    DeleteLastNode(Head);
    cout << endl;
    PrintList(Head);

    DeleteLastNode(Head);
    cout << endl;
    PrintList(Head);

    DeleteLastNode(Head);
    cout << endl;
    PrintList(Head);

}