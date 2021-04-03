#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

struct Node
{

	int data;
	Node *next;
};
void Insert_at_begining(int x);
void print();

Node *head;

int main()

{

	int i, n,x;
	head = NULL;

	cout << "How many numebrs: ";
	cin >> n;

	for(i = 1; i <= n; i++)
	{
		cin >> x;
		Insert_at_begining(x);
		print();



	}

	//head
}

void Insert_at_begining(int x)
{
	Node *temp = new Node();

	(*temp).data = x;
	(*temp).next = head;

	head = temp;
}

void print()

{

	Node *temp1 = head;

	cout << "List is: ";

	while(temp1 != NULL)
	{

		cout << (*temp1).data<<" ";
		temp1=(*temp1).next;
	}

	cout << endl;

}