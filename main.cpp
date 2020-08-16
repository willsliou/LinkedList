// Traversing a linked list
#include <iostream>
using namespace std;

struct Node {
  int data; // 2 bytes of memory
  struct Node *next; // 2 bytes of memory
}*first=NULL;

void create(int A[], int n) {
  int i;
  struct Node *t, *last;
  // first = new struct Node;
  first = (struct Node *)malloc(sizeof(struct Node));
  first->data=A[0];
  first->next=NULL;
  last = first;

  for(i=0;i<n;i++)
  {
    t = (struct Node*)malloc(sizeof(struct Node));
    // make linked list
    t->data=A[i];
    t->next=NULL;
    last->next=t;
    last=t;
  }
  // struct Node *p = first; // get address of first node
  // // each iteration, we take the address of the next node
  // while (p != 0)
  // {
  //   p = p->next; //takes address to next node
  // }  
}

void display(struct Node *p) {
  while (p != NULL)
  {
    printf("%d ", p->data);
    p=p->next;
  }
}

// recursive function for dipslaying
void Rdisplay(struct Node *p) {
  if (p != NULL)
  {
    printf("%d ", p->data);
    p=p->next;
  }
}

// in our node, the next value will be the previous address
int main() {
  // O(n) time
  // space is O(n) to account for last ememory returned in stack
  int A[] = {11,12,13,14,15,16,17,18,19};
  // create(A, sizeof(A)/sizeof(A[0]));
  create(A, 9);
  // display(first);
  Rdisplay(first);
}