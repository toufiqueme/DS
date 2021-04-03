#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 3
int arr[MAX];
int front, rear;

bool isEmpty();
bool isFull();
void enQueue(int);
void deQueue();
void Print();

int main()
{
	front = -1;
	rear = -1;
	enQueue(1);
	Print();

	enQueue(2); 
	Print();

	enQueue(3); 
	Print();

	deQueue();
	Print();

	enQueue(4); 
	Print();


	return 0;
}

bool isEmpty()
{

	if(front == -1 && rear == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isFull()
{
	//return (rear+1)%MAX == front ? true : false;

	if((rear + 1) % MAX == front)
	{
		return true;
	}

	else
	{
		return false;
	}
}

void enQueue(int x)
{
	if(isFull())
	{
		printf("queue is full\n");
		return;
	}
if(isEmpty())
	{


	front = rear = 0;
	}
else
	{

	rear = (rear+1)%MAX;

	}

arr[rear] = x;
}
void deQueue()
	{
		if(isEmpty()){
		printf("queue is empty\n");
		return;
	}
else if(front == rear)
	{
		front = rear = -1;
	}
else
	{
	front = (front+1)%MAX;
	}
}

void Print()
	{
		int length = (rear + MAX - front)%MAX + 1;
	int i;
	for( i = 0; i<length;i++)
	{
		printf("%d ", arr[(front+i)%MAX]);
	}
		printf("\n");
}

