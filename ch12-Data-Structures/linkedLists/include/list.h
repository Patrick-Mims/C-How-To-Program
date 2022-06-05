#ifndef LIST_H
#define LIST_H

struct node
{
  int data;
  struct node *next;
};

void delete_node(struct node **, int);
void display(struct node **);
void insert_node(struct node **, int);

#endif
