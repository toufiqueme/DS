#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

struct Node
{

	int data;
	 Node *next;
};

//typedef struct node Node;
Node *head;

Node *create_node(int item, Node *next)
{

	Node *new_node = new Node();

	if(new_node == NULL)
	{

		cout << "Memory allocation failed" <<endl;
		exit(1);
	}

	(*new_node).data = item;
	(*new_node).next = next;

	return new_node;

}

int main()

{
	Node *n;
	 n = create_node(10, NULL);

	 cout << "Data : " << (*n).data <<endl; 
}