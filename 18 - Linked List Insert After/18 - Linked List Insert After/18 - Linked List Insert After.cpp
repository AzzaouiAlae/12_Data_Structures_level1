#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
    Node* Prev;
};

void InsertAtBeginning(Node* &Head, int Value)
{
    Node* New_Node = new Node();
    New_Node->Value = Value;
    New_Node->Prev = NULL;
    New_Node->Next = NULL;

    if(Head != NULL)
        New_Node->Next = Head;

    Head = New_Node;
}

void PrintList(Node* Head)
{
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
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

void InsertAfter(Node* &Current, int Value)
{
    if (Current == NULL)
        return;

    Node* New_Node = new Node();
    New_Node->Value = Value;
    New_Node->Prev = Current;
    New_Node->Next = Current->Next;

    Current->Next = New_Node;
}

int main()
{
    Node* Head = NULL;

    InsertAtBeginning(Head, 5);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);

    PrintList(Head);

    Node* Node_ToFind = Find(Head, 1);
    if (Node_ToFind != NULL)
        cout << "Node Found :-)\n";

    else
        cout << "Node not Found :-(\n";

    InsertAfter(Node_ToFind, 500);
    PrintList(Head);
    system("pause>0");
}