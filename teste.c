#include <stdio.h>
#include "queue.h"
#include "stack.h"

int main(void){
	Stack s;
	Queue q;
	int32_t data;
	uint8_t value;
	uint8_t i;
	
	stack_init(&s);
	queue_init(&q);
	
	for(i=0; i<QUEUE_MAX_SIZE; i++){
		queue_enqueue(&q, i);
	}
	
	while(!queue_is_empty(&q)){
		queue_dequeue(&q, &value);
		printf("\nDequeued: %d", value);
	}
	
	for(i=0; i<STACK_MAX_SIZE; i++){
		stack_push(&s, i);
	}
	
	while(!stack_is_empty(&s)){
		stack_pop(&s, &data);
		printf("\nPopped: %d", data);
	}
	
	return 0;
}
