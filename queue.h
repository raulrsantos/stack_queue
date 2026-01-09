#ifndef QUEUE_H
#define QUEUE_H

#include <stdint.h>
#include <stdbool.h>

#define QUEUE_MAX_SIZE 64

typedef struct {
	uint8_t buffer[QUEUE_MAX_SIZE];
	uint32_t head;
	uint32_t tail;
	uint32_t count;
} Queue;

void queue_init(Queue *q);

bool queue_enqueue(Queue *q, uint8_t data);

bool queue_dequeue(Queue *q, uint8_t *data);

bool queue_is_empty(const Queue *q);

bool queue_is_full(const Queue *q);

#endif
