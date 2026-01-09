#ifndef STACK_H
#define STACK_H

#include <stdint.h>
#include <stdbool.h>

#define STACK_MAX_SIZE 32

typedef struct {
	int32_t data[STACK_MAX_SIZE];
	int32_t top;
} Stack;

void stack_init(Stack *s);

bool stack_push(Stack *s, int32_t value);

bool stack_pop(Stack *s, int32_t *value);

bool stack_is_empty(const Stack *s);

bool stack_is_full(const Stack *s);

#endif
