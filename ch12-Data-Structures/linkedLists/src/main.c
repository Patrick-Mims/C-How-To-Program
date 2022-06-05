#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(int argc, char **argv)
{
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    printf("No more memory\n");
    exit(EXIT_FAILURE);
  }

  insert_node(&head, 5);
  insert_node(&head, 10);
  insert_node(&head, 15);
  insert_node(&head, 20);
  insert_node(&head, 25);
  insert_node(&head, 30);

  display(&head);

  delete_node(&head, 10);
  display(&head);

  delete_node(&head, 5);
  display(&head);

  return 0;
}

/* A linked list is a linear collection of self-referential structures, called nodes */
