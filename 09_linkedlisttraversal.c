#include <stdio.h>
#include <stdlib.h>

struct node
{
                    int data;
                    struct node *next;
};
        void createlinkedlist(struct node *ptr)
        {
                    
                    while( ptr != NULL)
                    {
                       printf("element :%d\n", ptr->data);
                       ptr = ptr->next;                 
                    }
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
                    fourth->next = NULL;
                    createlinkedlist(head);

                    return 0;
}