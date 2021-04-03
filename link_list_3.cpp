#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct Node
{

	int data;
	Node *next;
};

void Insert(int data, int position);
void Print();


Node *head;

int main()

{

	head = NULL;

	Insert(2,1);
	Insert(3,2);
	Insert(4,1);
	Insert(5,2);
	Print();
}

void Insert(int data, int position)

{

	Node *temp1 = new Node();

	(*temp1).data = data;
	(*temp1).next = NULL;

	if(position == 1)
	{

		(*temp1).next = head;
		head = temp1;

		return;
	}

	Node *temp2 = head;

	for(int i = 0; i < position-2; i++)

	{
		temp2 = (*temp2).next;
	}

	(*temp1).next = temp2->next;
	(*temp2).next = temp1;
}


void Print()

{

	Node *temp = head;

	cout << "List is: ";

	while(temp != NULL)
	{
		cout << (*temp).data << "  ";
		temp = (*temp).next;
	}

	cout << endl;
}