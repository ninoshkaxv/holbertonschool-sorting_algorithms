#ifndef SORT_H
#define SORT_H

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

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size);

/**
 * print_list - Prints a list of integers
 *
 * @list: The list to be printed
 */
void print_list(const listint_t *list);

/**
 * bubble_sort - Sorts an array of integers in ascending order using
 *               the Bubble sort algorithm.
 * @array: The array to be sorted
 * @size: Number of elements in the array
 */
void bubble_sort(int *array, size_t size);

/**
 * insertion_sort_list - Sorts a doubly linked list of integers in
 *                       ascending order using the Insertion sort algorithm.
 * @list: Pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list);

#endif /* SORT_H */

