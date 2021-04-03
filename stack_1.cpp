#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;

#define MAX_SIZE 101
int A[MAX_SIZE];

void push(int x);
void pop();
void print();

int is_empty();
int Top();

int top = -1;



int main()
{
	push(2);
	print();

	push(3);
	print();

	push(4);
	print();

	push(5);

	print();
	pop();
	print();
	pop();
	print();
}


void push(int x)
{

	if(top == MAX_SIZE - 1)
	{
		cout << "Stack is full";

		return;
	}

	top++;

	A[top] = x;
}

void pop()
{

	if(top == -1)
	{

		cout << "Stack is empty";
		return;
	}

	top--;
}

int Top()
{
	return A[top];
}

int is_empty()
{

	if(top == -1)
	{
		return 1;
	}

	return 0;
}

void print()
{

	cout << "Stack is: ";

	int i;

	for(i = 0; i <= top; i++)
	{

		cout << A[i] << " ";
	}

	cout << endl;
}