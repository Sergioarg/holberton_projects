#ifndef CAL_H
#define CAL_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/* Prototype: op_add */
int op_add(int a, int b);

/* Prototype: op_sub */
int op_sub(int a, int b);

/* Prototype: op_mul */
int op_mul(int a, int b);

/* Prototype: op_div */
int op_div(int a, int b);

/* Prototype: op_mod */
int op_mod(int a, int b);

/* panic  */
int (*get_op_func(char *s))(int, int);

#endif
