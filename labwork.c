#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int value;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;

void firstNode(int v)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    n->value = v;
    n->next = NULL;
    head = n;
    tail = n;
}

void addNode(int v)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    tail->next = n;
    n->value = v;
    n->next = NULL;
    tail = n;
}

void printList()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int sumOfSquareValues()
{
    struct Node *temp = head;
    int sum = 0;
    while (temp != NULL)
    {
        sum += (temp->value) * (temp->value);
        temp = temp->next;
    }
    return sum;
}

int main()
{
    firstNode(5);
    addNode(7);
    addNode(9);
    addNode(11);
    addNode(13);
    printList();
    printf("Sum of square values: %d\n", sumOfSquareValues());

    return 0;
}
