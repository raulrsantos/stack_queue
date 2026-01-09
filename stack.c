#include "stack.h"

void stack_init(Stack *s) {
	s->top = -1;
}

bool stack_is_empty(const Stack *s) {
	return s->top < 0;
}

bool stack_is_full(const Stack *s) {
	return s->top >= (STACK_MAX_SIZE - 1);
}

bool stack_push(Stack *s, int32_t value){
	if(stack_is_full(s)) {
		return false;
	}
	
	s->data[++s->top] = value;
	return true;
}

bool stack_pop(Stack *s, int32_t *value){
	if(stack_is_empty(s)){
		return false;
	}
	
	*value = s->data[s->top--];
	return true;
}
