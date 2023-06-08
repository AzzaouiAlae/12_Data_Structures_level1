#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
    Node* Prev;
};

void InsertAtBeginning(Node*& Head, int Value)
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

    InsertAtBeginning(Head, 5);
    InsertAtBeginning(Head, 4);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 1);

    PrintList(Head);

    Node* N1 = Find(Head, 2);

    if (N1 != NULL)    
        cout << "\nNode found :-)";
    
    else
        cout << "\nNode Not found :-(";


    system("pause>0");
}