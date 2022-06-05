#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node *delete_node(struct node *list, int item)
{
  struct node *cur, *prev;

  for(cur = list, prev = NULL; cur != NULL && cur->data != item; prev = cur, cur = cur->next)
    ;

  if(cur == NULL)
  {
    return list;
  }

  if(prev == NULL)
  {
    list = list->next;
  } else {
    prev->next = cur->next;
  }

  free(cur);

  return list;
}

void display(struct node **list)
{
  struct node *s = NULL;

  for(s = *list; s != NULL; s = s->next)
  {
    printf("->%d\n", s->data);
  }
}

void insert_node(struct node **list, int item)
{
  struct node *new_node;

  if((new_node = malloc(sizeof(struct node))) == NULL)
  {
    printf("No More Memory");
    exit(EXIT_FAILURE);
  }

  new_node->data = item;
  new_node->next = *list;

  *list = new_node;
}
