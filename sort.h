#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *get_head(listint_t *tmp);

void _qsort(int *array, int left, int right, size_t size);
size_t partition(int *array, int left, int right, size_t size);
void swap(int *array, int left, int right);
void insertion_sort(int *array, int size, int diff);
void swap_list(listint_t **ptr1, listint_t **ptr2, int n);
void increase_sort(listint_t **ptr, listint_t **limit, listint_t **list);
void decrease_sort(listint_t **ptr, listint_t **limit, listint_t **list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
/*void sort_deck(deck_node_t **deck); */

#endif /* SORT_H */
