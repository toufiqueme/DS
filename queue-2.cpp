#include <stdio.h>
#define SIZE 5

int items[SIZE];
int front = -1;
int rear = -1;

int isFull();
int isEmpty();
void enQueue(int);
int deQueue();
void display();


int main() {
  
  deQueue();

  enQueue(1);
  enQueue(2);
  enQueue(3);
  enQueue(4);
  enQueue(5);

  // Fails to enqueue because front == 0 && rear == SIZE - 1
  enQueue(6);

  display();
  deQueue();

  display();

  enQueue(7);
  display();

  enQueue(8);

  return 0;
}

int isFull()
{
  if((front == rear + 1) || (front == 0 && rear == SIZE - 1)) 
    {
        return 1;
    }
  return 0;
}


int isEmpty() 
{
  if (front == -1)
  {

    return 1;
  }
  return 0;
}


void enQueue(int element)
 {
  if (isFull())
  {
    printf("Queue is full.\n");
  }
  else 
  {
    if (front == -1)
    {
     front = 0;
    }

    rear = (rear + 1) % SIZE;

    items[rear] = element;

    printf("Inserted: %d\n", element);
  }
}


int deQueue() 
{
  int data;
  if (isEmpty())
   {
    printf("Queue is empty. \n");

    return (-1);
  } 
  else 
  {
    data = items[front];
    if (front == rear)
     {
      front = -1;
      rear = -1;
    } 
    
    else
     {
      front = (front + 1) % SIZE;
    }
    printf("Deleted element: %d \n",data);
    return data;
  }
}


void display()
 {
  int i;
  if (isEmpty())
  {
    printf(" \n Empty Queue\n");
  }
  else
   {
    printf("Front: %d \n", front);
    printf("Items: ");
    for (i = front; i != rear; i = (i + 1) % SIZE)
     {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\nRear: %d \n", rear);
  }
}

