#ifndef STACK_H_
# define STACK_H_

# include "generic_list.h"

typedef list_t stack_t;

/* informations */

unsigned int    stack_get_size(stack_t stack);
t_bool          stack_is_empty(stack_t stack);

/* Modification */

t_bool  stack_push(stack_t *stack_ptr, void *elem);
t_bool  stack_pop(stack_t *stack_ptr);

/* Access */

void    *stack_top(stack_t stack);

#endif /* !STACK_H_ */
