#include <stdio.h>
#include <stdlib.h>

struct node
{
     int data;
     struct node *next;
};
void createlinkedlist(struct node *ptr)
{

     while (ptr != NULL)
     {
          printf("element :%d\n", ptr->data);
          ptr = ptr->next;
     }
}
//         case 1 : insertion on begining
struct node *insertatbegining(struct node *head, int data)
{
     struct node *pointer = (struct node *)malloc(sizeof(struct node));
     pointer->data = data;
     pointer->next = head;
     return pointer;
}
// case 2 : insertion at some index
struct node *insertatindex(struct node *head, int data, int index)
{
     struct node *pointer = (struct node *)malloc(sizeof(struct node));
     struct node *p = head;
     int i = 0;
     while (i != index - 1)
     {
          p = p->next;
          i++;
     }
     pointer->data = data;
     pointer->next = p->next;
     p->next = pointer;
     return head;
}
// case 3 : insertion at the end
struct node *insertatend(struct node *head, int data, int size)
{
     struct node *pointer = (struct node *)malloc(sizeof(struct node));
     struct node *p = head;
     int i = 0;
     while (i != size)
     {
          p = p->next;
          i++;
     }
     pointer->data = data;
     pointer->next = NULL;
     p->next = pointer;
     return head;
}
// case 4 : insert after a given node
struct node *insertafternode(struct node *head, struct node *prevnode, int data)
{
     struct node *pointer = (struct node *)malloc(sizeof(struct node));
     pointer->data = data;
     pointer->next = prevnode->next;
     prevnode->next = pointer;
     return head;
}

int main()
{
     struct node *head;
     struct node *second;
     struct node *third;
     struct node *fourth;
     struct node *fifth;

     // allocate memory for nodes in linked list in heap
     head = (struct node *)malloc(sizeof(struct node));
     second = (struct node *)malloc(sizeof(struct node));
     third = (struct node *)malloc(sizeof(struct node));
     fourth = (struct node *)malloc(sizeof(struct node));
     fifth = (struct node *)malloc(sizeof(struct node));
     // linking first node to second node
     head->data = 5;
     head->next = second;
     // linking second node to third node
     second->data = 10;
     second->next = third;
     // linking third node to fourth node
     third->data = 15;
     third->next = fourth;
     // linking fourth node to fifth node
     fourth->data = 20;
     fourth->next = fifth;
     // terminating linked list
     fifth->data = 25;
     fifth->next = NULL;
     printf("Here is element of linked list :))\n");
     createlinkedlist(head);
     // insertion at begining
     int data = 1;
     int index = 2;
     int size = 4;
     int afternode = 2;
     // head = insertatbegining(head, 1);
     // printf("inserting %d at begining  in linked list :))\n", data);
     // createlinkedlist(head);
     // insertion at some index
     // head = insertatindex(head, 1, 2);
     // printf("Inserting %d at index %d in linked list :))\n", data, index);
     // createlinkedlist(head);
     // insert at the end of linked list
     // head = insertatend(head, 1, 4);
     // printf(" Inserting %d at the end of linked list :)) \n ", data);
     // createlinkedlist(head);
     // head = insertafternode(head, second, 1);
     // printf("Inserting  %d after a node %d in linked list :)) \n", data, afternode);
     // createlinkedlist(head);

     return 0;
}