#include <stdio.h>
#include <stdlib.h>
struct node
{
                    int data;
                    struct node *next;
};
void createcircularlinkedlist(struct node *head)
{
                    struct node *ptr = head;
                    do
                    {
                                        printf(" element= %d ", ptr->data);
                                        ptr = ptr->next;
                                        /* code */
                    } while (ptr->next != head);
}
struct node *insertatbeginning(struct node *head, int data)
{
                    struct node *pointer = (struct node *)malloc(sizeof(struct node));
                    struct node *p = head->next;
                    pointer->data = data;
                    while (p->next != head)
                    {
                                        p = p->next; /* code */
                    }
                    p->next = pointer;
                    pointer->next = head;
                    head = pointer;
                    return head;
}

int main()
{
                    int data = 5;
                    struct node *head;
                    struct node *second;
                    struct node *third;
                    struct node *fourth;
                    struct node *fifth;
                    // allocating size for node in linked list in heap
                    head = (struct node *)malloc(sizeof(struct node));
                    second = (struct node *)malloc(sizeof(struct node));
                    third = (struct node *)malloc(sizeof(struct node));
                    fourth = (struct node *)malloc(sizeof(struct node));
                    fifth = (struct node *)malloc(sizeof(struct node));
                    // linking first node to second node
                    head->data = 1;
                    head->next = second;
                    // linking second node to third node
                    second->data = 2;
                    second->next = third;
                    // linking third node to fourth node
                    third->data = 3;
                    third->next = fourth;
                    // linking fourth node to fifth node
                    fourth->data = 4;
                    fourth->next = fifth;
                    // linking fifth node to head node
                    fifth->data = 5;
                    fifth->next = head;
                    printf("here is your circular linked list\n");
                    createcircularlinkedlist(head);

                    return 0;
}