#ifndef LIST_H
#define LIST_H

struct node
{
  int data;
  struct node *next;
};

void insert_node(struct node **, int);
void display(struct node **);
//struct node *delete_node(struct node *, int);
void delete_node(struct node **, int);

#endif
