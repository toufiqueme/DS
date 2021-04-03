#include<stdio.h>
#include<cstdlib>
#include<iostream>

using namespace std;

struct node
{
  int data;

  struct node *next;
};

typedef struct node Node;

//Node *head;

Node *
create_node (int iteam, Node * next)
{

  Node *new_node;

  new_node = (Node *) malloc (sizeof (Node));

  if (new_node == NULL)

    {
      printf ("Memory alloction failed. Try again\n");
      exit (1);

    }


  new_node->data = iteam;
  new_node->next = next;

  return new_node;
}



Node *
prepend (Node * head, int item)
{
  node *new_node = create_node (item, head);

  return new_node;
}


Node *
append (Node * head, int iteam)
{

  Node *new_node = create_node (iteam, NULL);

  if (head == NULL)

    {
      return new_node;
    }

  Node *current_node = head;

  while (current_node->next != NULL)

    {
      current_node = current_node->next;
    }

  current_node->next = new_node;

  return head;
}

void
print_linked_list (Node * head)
{

  Node *current_node = head;

  while (current_node != NULL)

    {
      printf ("%d ", current_node->data);

      current_node = current_node->next;
    }

  printf ("\n");
}

int
main ()
{

  Node *n1, *head;

  n1 = create_node (10, NULL);

  head = n1;

  print_linked_list (head);

  head = append (head, 20);

  print_linked_list (head);

  head = append (head, 30);

  print_linked_list (head);

  return 0;
}
