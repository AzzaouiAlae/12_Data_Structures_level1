#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
};

void InsertAtBeginning(Node*& Head, int Value)
{
    Node* new_Node = new Node();
    new_Node->Value = Value;
    new_Node->Next = Head;

    Head = new_Node;
}

void PrintNode(Node* Head)
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

    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintNode(Head);

    if (Find(Head, 5) != NULL)
        cout << "\nValue found :-)";
    else
        cout << "\nValue not found :-(";

    system("pause>0");
}