#include <stdio.h>
#include <stdlib.h>
typedef struct Node {

  int data;
  struct Node *next;

} node;

int main(void) {

  node *a = (node *)malloc(sizeof(node));
  node *b = (node *)malloc(sizeof(node));
  node *c = (node *)malloc(sizeof(node));

  a->next = b;
  b->next = c;
  c->next = NULL;

  a->data = 10;
  b->data = 20;
  c->data = 30; // a -> temp -> b

  int n = 15;

  node *temp = (node *)malloc(sizeof(node));
  temp->data = 15;
  temp->next = a->next;
  a->next = temp;

  while (a != NULL) {

    printf("%d ", a->data);
    a = a->next;
  }

  free(a);
  return 0;
}
