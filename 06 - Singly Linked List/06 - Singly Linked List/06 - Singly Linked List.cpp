#include <iostream>

using namespace std;

struct Node
{
    int Value;
    Node* Next;
};

int main()
{
    Node * Head;
    
    Node* MyNode1 = NULL;
    Node* MyNode2 = NULL;
    Node* MyNode3 = NULL;

    MyNode1 = new Node;
    MyNode2 = new Node;
    MyNode3 = new Node;

    MyNode1->Value = 1;
    MyNode1->Next = MyNode2;

    MyNode2->Value = 2;
    MyNode2->Next = MyNode3;

    MyNode3->Value = 3;
    MyNode3->Next = NULL;


    Head = MyNode1;
    while (Head != NULL)
    {
        cout << Head->Value << endl;
        Head = Head->Next;
    }
    system("pause>0");
}