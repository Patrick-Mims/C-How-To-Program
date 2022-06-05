#include <stdio.h>
#include <stdlib.h>

#include "list.h"

int main(int argc, char **argv)
{
  int i = 0;
  struct node *head = NULL;

  if((head = malloc(sizeof(struct node))) == NULL)
  {
    printf("No more memory\n");
    exit(EXIT_FAILURE);
  }

  do
  {
    insert_node(&head, i);
    i = i + 5;
  } while(i < 30);

  display(&head);

  delete_node(&head, 10);
  display(&head);

  delete_node(&head, 5);
  display(&head);

  return 0;
}
