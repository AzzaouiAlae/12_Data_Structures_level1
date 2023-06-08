#include <iostream>

using namespace std;

class Node {
public:
	int Value;
	Node* Next;
};

void InsertAtBiginning(Node*& Head, int Value)
{
	Node* New_Node = new Node();
	New_Node->Value = Value;
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

void InsertAtEnd(Node* &Head, int Value)
{
	Node* New_Node = new Node();
	New_Node->Value = Value;
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

void InsertAfter(Node* NodeToInsAfter, int Value)
{	
	if (NodeToInsAfter == NULL)
		return;

	Node* New_Node = new Node();
	New_Node->Value = Value;	
	New_Node->Next = NodeToInsAfter->Next;
	NodeToInsAfter->Next = New_Node;
}

void DeleteNode(Node*& Head, int Value)
{
	Node* Current = Head, * Prev = Head;
	while (Current != NULL && Current->Value != Value)
	{
		Prev = Current;
		Current = Current->Next;
	}

	if (Current == NULL)
		return;

	Prev->Next = Current->Next;
	delete Current;
}

void DeleteFirstNode(Node*& Head)
{
	if (Head == NULL)
		return;

	Node* NodeToDelete = Head;
	Head = NodeToDelete->Next;
	delete NodeToDelete;
}

void DeleteLastNode(Node*& Head)
{
	if (Head == NULL)
		return;

	Node* Last_Node = Head, *Prev_Node = Head;
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

	if (Find(Head, 6) != NULL)
		cout << "\nThe node is found :-)";
	else
		cout << "\nThe node is not found :-(\n\n";

	Node* NodeToInsAfter = Find(Head, 2);
	InsertAfter(NodeToInsAfter, 10);

	PrintList(Head);


	cout << "\n\n";
	DeleteNode(Head, 10);	

	DeleteFirstNode(Head);	
	DeleteLastNode(Head);
	DeleteLastNode(Head);
	PrintList(Head);

	system("pause>0");

	
}