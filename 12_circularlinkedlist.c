#include <stdio.h>
#include <stdlib.h>

struct node
{
                    int data;
                    struct node *next;
};
void createlinkedlist(struct node *head)
{
                    struct node *ptr = head;
                    do
                    {
                                        printf("element %d\n ", ptr->data); /* code */
                                        ptr = ptr->next;
                    } while (ptr->next != head);
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
                    // linking fifth node to again head
                    fifth->data = 25;
                    fifth->next = head;
                    // print circular linked list
                    createlinkedlist(head);

                    return 0;
}