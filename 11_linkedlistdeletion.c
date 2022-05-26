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
                                        printf("element %d\n", ptr->data);
                                        ptr = ptr->next;
                    }
}
// deleting first element in linked list
struct node *deleteinbegining(struct node *head)
{
                    struct node *pointer = head;
                    head = head->next;
                    free(pointer);
                    return head;
}
// deleting element at some index
struct node *deleteinbetween(struct node *head, int index)
{
                    struct node *p = head;
                    struct node *q = head->next;
                    for (int i = 1; i < index - 1; i++)
                    {
                                        p = p->next;
                                        q = q->next;
                    }
                    p->next = q->next;
                    free(q);
                    return head;
}
// deleting element at last
struct node *deleteatend(struct node *head)
{
                    struct node *p = head;
                    struct node *q = head->next;
                    while (q->next != NULL)
                    {
                                        p = p->next;
                                        q = q->next;
                    }
                    p->next = NULL;
                    free(q);
                    return head;
}

int main()
{
                    struct node *head;
                    struct node *second;
                    struct node *third;
                    struct node *fourth;
                    struct node *fifth;
                    head = (struct node *)malloc(sizeof(struct node));
                    second = (struct node *)malloc(sizeof(struct node));
                    third = (struct node *)malloc(sizeof(struct node));
                    fourth = (struct node *)malloc(sizeof(struct node));
                    fifth = (struct node *)malloc(sizeof(struct node));
                    // link head to second node
                    head->data = 5;
                    head->next = second;
                    // link second to third node
                    second->data = 10;
                    second->next = third;
                    // link third to fourth node
                    third->data = 15;
                    third->next = fourth;
                    // link fourth to fifth node
                    fourth->data = 20;
                    fourth->next = fifth;
                    // terminate fifth node
                    fifth->data = 25;
                    fifth->next = NULL;
                    int index = 3;
                    printf("here is the linked list :))\n");
                    createlinkedlist(head);
                    // printf("after deleting first element of  linked list ;))\n");
                    // head = deleteinbegining(head);
                    // createlinkedlist(head);
                    // printf(" deleting element at index %d in linked list \n", index);
                    // head = deleteinbetween(head, 3);
                    // createlinkedlist(head);
                    printf("after deleting last element of linked list :))\n");
                    head = deleteatend(head);
                    createlinkedlist(head);
                    return 0;
}
