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

    if (Head != NULL)
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

void PrintListDetails(Node* Head)
{
    cout << "NULL <-";
    while (Head != NULL)
    {
        cout << "-> " << Head->Value << " <-";
        Head = Head->Next;
    }
    cout << "-> NULL\n";
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
    PrintListDetails(Head);
}