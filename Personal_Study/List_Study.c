#include <stdio.h>

typedef int ElementType;
typedef struct tagNode {
	ElementType Data;
	struct tagNode* Nextnode;
}Node;

Node* SLL_CreateNewNode(ElementType Newdata)
{
	Node* Newnode = (Node*)malloc(sizeof(Node));
	Newnode->Data = Newdata;
	Newnode->Nextnode = NULL;
	return Newnode;
}

void SLL_AppendNode(Node **Head, Node *Newnode)
{
	if ((*Head) == NULL) *Head = Newnode;
	else
	{
		Node *Tail = (*Head);
		while (Tail->Nextnode != NULL) Tail = Tail->Nextnode;
		Tail->Nextnode = Newnode;
	}
}

Node *SLL_getNode(Node *Head, int Location)
{
	Node *current = Head;
	while (current != NULL && (--Location) >= 0) current = current->Nextnode;
	return current;
}
void SLL_RemoveNode(Node **Head, Node *Remove)
{
	if ((*Head) == Remove) *Head = Remove->Nextnode;
	else
	{
		Node *current = *Head;
		while (current != NULL && current->Nextnode != Remove) current = current->Nextnode;
		if (current->Nextnode = Remove) current->Nextnode = Remove->Nextnode;
	}
}
int main(void)
{
	
}