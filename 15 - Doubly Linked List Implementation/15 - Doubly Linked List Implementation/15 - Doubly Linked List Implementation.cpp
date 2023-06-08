#include <iostream>

using namespace std;

class Node {
public:
    int Value;
    Node* Next;
    Node* Prev;
};

int main()
{
    Node* Head = NULL;

    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    Node1->Value = 10;
    Node1->Prev = NULL;
    Node1->Next = Node2;

    Node2->Value = 20;
    Node2->Prev = Node1;
    Node2->Next = Node3;

    Node3->Value = 30;
    Node3->Prev = Node2;
    Node3->Next = NULL;

    Head = Node1;
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
    system("pause>0");
}