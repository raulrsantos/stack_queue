#include "queue.h"

void queue_init(Queue *q){
		q->head = 0;
		q->tail = 0;
		q->count = 0;
}

bool queue_is_empty(const Queue *q) {
	return q->count == 0;
}

bool queue_is_full(const Queue *q) {
	return q->count == QUEUE_MAX_SIZE;
}

bool queue_enqueue(Queue *q, uint8_t data){
	if(queue_is_full(q)){
		return false;
	}
	
	q->buffer[q->tail] = data;
	q->tail = (q->tail + 1) % QUEUE_MAX_SIZE;
	q->count++;
	
	return true;
}

bool queue_dequeue(Queue *q, uint8_t *data){
	if(queue_is_empty(q)){
		return false;
	}
	
	*data = q->buffer[q->head];
	q->head = (q->head + 1) % QUEUE_MAX_SIZE;
	q->count--;
	
	return true;
}
