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
void Delete(int position);

Node *head;
int main()
{
	head = NULL;
	int position;

	Insert(2,1);
	Insert(3,2);
	Insert(4,3);
	Insert(5,4);

	Print();

	cout << "Enter position: ";
	cin>> position;
	Delete(position);
	Print();


}

void Delete(int position)

{
	Node *temp1 = head;

	if(position == 1)
	{
		head = (*temp1).next;
		free(temp1);

		return;
	}

	int i;

	for(i = 0; i < position -2; i++)
	{

		temp1 = (*temp1).next;


	}

	Node *temp2 = (*temp1).next;

	(*temp1).next = temp2->next;

	free(temp2);
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

	int i;

	for(i = 0; i < position-2; i++)
	{

		temp2 = temp2->next;
	}

	(*temp1).next = (*temp2).next;

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

