// queue.h
#ifndef QUEUE_H
#define QUEUE_H

#include <stdio.h>  
#include <stdlib.h> 


#define MAXQUEUE 26 // Max elements for the queue (e.g., A-Z)
#define TRUE 1
#define FALSE 0


typedef int QueueElement; 


typedef struct queue {
    int count;
    int front; 
    int rear;  
    QueueElement data[MAXQUEUE]; 
} Queue;

// function prototypes

void CreateQueue(Queue *q);
int IsQueueEmpty(const Queue *q);
int IsQueueFull(const Queue *q);
void Append(Queue *q, QueueElement x);
int QueueSize(const Queue *q);


int getIndex(Queue *q, char c);    
char getChar(Queue *q, int index);  


#endif
