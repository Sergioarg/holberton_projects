#ifndef LIST_H
#define LIST_H

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/* standar lib */
#include <stdio.h>
/* stdlib lib */
#include <stdlib.h>
/* string lib */
#include<string.h>
/* 0. function that prints all the elements of a listint_t list. */
size_t print_listint(const listint_t *h);
/*1. Function that returns the number of elements in a linked listint_t list.*/
size_t listint_len(const listint_t *h);
/* 2.Function that adds a new node at the beginning of a listint_t list. */
listint_t *add_nodeint(listint_t **head, const int n);
/* 3. Function that adds a new node at the end of a listint_t list.*/
listint_t *add_nodeint_end(listint_t **head, const int n);
/* 4. Function that frees a listint_t list. */
void free_listint(listint_t *head);
/* 5. Function that frees a listint_t list. */
void free_listint2(listint_t **head);
/* 6. Function that deletes the head node of a listint_t linked list, */
/* and returns the head node’s data (n).*/
int pop_listint(listint_t **head);
/* 7. Function that returns the nth node of a listint_t linked list. */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
/* 8. Function that returns the sum of all the data (n) of a listint_t */
/* linked list. */
int sum_listint(listint_t *head);
/* 9. Function that inserts a new node at a given position. */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
/* 10. Function that deletes the node at index index */
/* of a listint_t linked list. */
int delete_nodeint_at_index(listint_t **head, unsigned int index);

#endif
