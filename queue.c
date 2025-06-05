
#include "queue.h" 
#include <string.h> 

void CreateQueue(Queue *q) {
    q->count = 0;
    q->front = 0;
    q->rear = -1;
}

int IsQueueEmpty(const Queue *q) {
    return (q->count == 0);
}

int IsQueueFull(const Queue *q) {
    return (q->count == MAXQUEUE);
}

void Append(Queue *q, QueueElement x) {
    if (IsQueueFull(q)) {
        printf("Queue Full - Cannot append element.\n");
        exit(1); //used here to terminate
    } else {
        q->rear = (q->rear + 1) % MAXQUEUE; 
        q->data[q->rear] = x;
        q->count++;
    }
}

int QueueSize(const Queue *q) {
    return (q->count);
}



//get index for a char

int getIndex(Queue *q, char c) {
    for (int i = 0; i < MAXQUEUE; i++) {
        if (q->data[i] == c) {
            return i;
        }
    }
    return -1; // not found
}

//get char for an index

char getChar(Queue *q, int index) {
    if (index >= 0 && index < MAXQUEUE) {
        return (char)q->data[index]; // Cast back to char
    }
    return '\0'; // if invalid char
}



