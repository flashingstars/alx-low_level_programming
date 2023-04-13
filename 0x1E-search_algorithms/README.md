This is a directory folder containing tasks that have linear and binry search algorithm tasks.

Language of choice is C programming.

All prototypes are in the search_algos.h file which is include<F3> guarded.

0. A function that searches for a value in an array of integers using the Linear search algorithm.
	array is a pointer to the first element of the array
	size is the number of elements in the array
	return the first index value or -1 if the value is not found or array is NULL
	Display all compared values searched

1. A function that searches for a value stored in a sorted array of integers using Binary Search algorithm.
	array is a pointer to the first element
	size is the number of elements in an array
	return index of the value or -1 if the value is not present or array is NULL

2. What is the time complexity (worst case) of linear search in an array of size n?

3. What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

4. What is the time complexity (worst case) of a binary search in an array of size n?

5. What is the space complexity (worst case) of a binary search in an array of size n?

6. What is the space complexity of this function / algorithm?

int **allocate_map(int n, int m)
{
	int **map;

	map = malloc(sizeof(int *) * n);
	for (size_t i = 0; i < n; i++)
	{
		map[i] = malloc(sizeof(int) * m);
	}
	return (map);
}
