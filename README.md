![github-header-image(5)](https://github.com/ninoshkaxv/TEST/assets/143634181/1d7317fc-79f7-43bb-8ec6-a6f33d52071e)


# Sorting Algorithms

Welcome! This repository contains C implementations of classic sorting algorithms, both for arrays and doubly linked lists.

## Table of Contents

- [Implemented Algorithms](#implemented-algorithms)
  - [Bubble Sort](#bubble-sort)
  - [Insertion Sort](#insertion-sort)
  - [Selection Sort](#selection-sort)
  - [Quick Sort](#quick-sort)
- [Compilation and Testing](#compilation-and-testing)
- [Authors](#authors)
  
## Implemented Algorithms

## Implemented Algorithms

0. **Bubble Sort**
   - Function: `void bubble_sort(int *array, size_t size);`
   - Visualization: <img src="https://github.com/ninoshkaxv/TEST/assets/143634181/29bc299a-79e9-47d2-afe1-509cdbb814f6" width="400" height="170">
   - Time Complexity:
     - Best Case: O(n)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)

1. **Insertion Sort**
   - Function: `void insertion_sort_list(listint_t **list);`
   - Visualization: <img src="https://github.com/ninoshkaxv/TEST/assets/143634181/9ddc67c0-81cb-45dc-8964-22444b6061ff" width="400" height="170">
   - Time Complexity:
     - Best Case: O(n)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)
       
2. **Selection Sort**
   - Function: `void selection_sort(int *array, size_t size);`
   - Visualization: <img src="https://github.com/ninoshkaxv/TEST/assets/143634181/f58e6564-bafa-42d1-8e83-3ac3b4bf4e8e" width="400" height="170">
   - Time Complexity:
     - Best Case: O(n^2)
     - Average Case: O(n^2)
     - Worst Case: O(n^2)

3. **Quick Sort**
   - Function: `void quick_sort(int *array, size_t size);`
   - Visualization: <img src="https://github.com/ninoshkaxv/TEST/assets/143634181/186fd4bd-910c-48f6-a320-71c4f53304ff" width="400" height="170">
   - Time Complexity:
     - Best Case: O(n log n)
     - Average Case: O(n log n)
     - Worst Case: O(n^2)
## Compilation and Testing

To compile the code, use the provided compilation flags:

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sorting_algorithms
```

## Authors
- Ninoshka Perez
- Aramis Martinez
