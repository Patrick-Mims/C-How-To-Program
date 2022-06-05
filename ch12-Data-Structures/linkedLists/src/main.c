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

  display(&head);

  //struct node *i = delete_node(head, 10);
  delete_node(&head, 10);

  display(&head);

  //struct node *j = delete_node(head, 5);

  delete_node(&head, 5);

  display(&head);

  //printf("---->%d\n", j->data);

  return 0;
}

/* A linked list is a linear collection of self-referential structures, called nodes */
