#include <stdint.h>
#include "appconst.h"
#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#ifndef QUEUE_CONTENT_TYPE
#define QUEUE_CONTENT_TYPE uint32_t
#endif

typedef struct _queue_ Queue;

struct _queue_ {
    uint32_t size;
    uint32_t count;
    uint32_t rear;
    uint32_t front;
    QUEUE_CONTENT_TYPE data[MAX_DEPTH];
};

typedef struct  _queue_result_ QueueResult;

struct _queue_result_ {
    QUEUE_CONTENT_TYPE data;
    uint32_t status;
};

/* Public interfaces */
Queue queue_new (uint32_t size);
uint8_t queue_full(Queue *q);
uint8_t queue_empty(Queue *q);
Queue* queue_add(Queue *q, QUEUE_CONTENT_TYPE ele, QueueResult *res);
Queue* queue_delete(Queue *q, QueueResult *res);
Queue* queue_delete(Queue *q, QueueResult *res);
uint32_t queue_length(Queue *q);

#endif // QUEUE_H_INCLUDED