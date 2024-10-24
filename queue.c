#include "queue.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Opgave 3
void initialize(queue *q)
{

    q->size = 0;
    q->front = NULL;
    q->rear = NULL;
}

bool empty(const queue *q)
{
    return q->size == 0;
}

bool full(const queue *q)
{
    // can not be full
    return false;
}

void enqueue(queue *q, int x)
{
    node *newnode = (node *)malloc(sizeof(node));
    assert(newnode != NULL);

    newnode->data = x;
    newnode->next = NULL;

    if (empty(q))
    {
        q->front = newnode;
        q->rear = newnode;
    }
    else

    {
        q->rear->next = newnode;
        q->rear = newnode;
    }
    q->size++;
}

int dequeue(queue *q)
{
    node *temp = q->front;
    int value = temp->data;
    q->front = q->front->next;

    if (q->front==NULL)
    {
        q->rear=NULL;
    }
    
    q->size--;

    return value;
}

// Opgave 4
void push(int element, node **head)
{
}

int pop(node **head)
{
    return -1;
}

void enqueueStack(queue *q, int x)
{
}

int dequeueStack(queue *q)
{
    return -1;
}