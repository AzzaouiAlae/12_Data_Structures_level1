#include <iostream>

using namespace std;

class Node{
public:
    int Value;
    Node* Next;
};

void InsertAtBeginning(Node * &Head, int Value)
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

int main()
{
    Node* Head = NULL;
    
    InsertAtBeginning(Head, 1);
    InsertAtBeginning(Head, 2);
    InsertAtBeginning(Head, 3);
    InsertAtBeginning(Head, 4);

    PrintNode(Head);
}