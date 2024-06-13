/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elsikira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:52:54 by elsikira          #+#    #+#             */
/*   Updated: 2024/06/13 02:24:24 by elsikira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


// Function to extract elements into an array
int *extract_elements(t_stack *stack, int size) {
    int *arr = malloc(size * sizeof(int));
    if (!arr) {
        return NULL; // Handle memory allocation failure
    }

    t_stack *current = stack;
    for (int i = 0; i < size; i++) {
        arr[i] = current->value;
        current = current->next;
    }

    return arr;
}

// Partition function for quickselect
int partition(int *arr, int left, int right, int pivot_index) {
    int pivot_value = arr[pivot_index];
    int temp = arr[pivot_index];
    arr[pivot_index] = arr[right];
    arr[right] = temp; // Move pivot to end
    int store_index = left;

    for (int i = left; i < right; i++) {
        if (arr[i] < pivot_value) {
            temp = arr[i];
            arr[i] = arr[store_index];
            arr[store_index] = temp;
            store_index++;
        }
    }

    temp = arr[store_index];
    arr[store_index] = arr[right];
    arr[right] = temp; // Move pivot to its final place

    return store_index;
}

// Quickselect function to find the k-th smallest element
int quickselect(int *arr, int left, int right, int k) {
    if (left == right) {
        return arr[left]; // If the list contains only one element
    }

    int pivot_index = left + (right - left) / 2; // Choose a pivot index
    pivot_index = partition(arr, left, right, pivot_index);

    if (k == pivot_index) {
        return arr[k]; // The pivot is the k-th smallest element
    } else if (k < pivot_index) {
        return quickselect(arr, left, pivot_index - 1, k);
    } else {
        return quickselect(arr, pivot_index + 1, right, k);
    }
}

// Function to find the median using quickselect
int ft_find_median(t_stack *stack) {
    int size = stack_size(stack);
    if (size == 0) {
        return INT_MIN; // Return some default value if stack is empty (handle error case)
    }

    int *elements = extract_elements(stack, size);
    if (elements == NULL) {
        return INT_MIN; // Handle memory allocation failure
    }

    int median;
    if (size % 2 == 0) {
        int mid1 = quickselect(elements, 0, size - 1, size / 2 - 1);
        int mid2 = quickselect(elements, 0, size - 1, size / 2);
        median = (mid1 + mid2) / 2;
    } else {
        median = quickselect(elements, 0, size - 1, size / 2);
    }

    free(elements); // Free the allocated memory
    return median;
}
 
void	push_half_to_b(t_stack **a, t_stack **b)
{
	int	i;
	int	half_size;

	i = 0;
	half_size = stack_size(*a) / 2;
	while (i < half_size)
	{
		pb(b, a, PRINT);
		i++;
	}
}

void	sort_algo(t_stack **a, t_stack **b)
{
	int	size_a;
	int	median_a;
	int	median_b;

	size_a = stack_size(*a);
		if (size_a > 3)
		{
			push_half_to_b(a, b);
		}
	median_a = ft_find_median(*a);
	printf("The median of a is : %d\n", median_a);

	while ((*a)->value > median_a)
	{
		ra(a, PRINT);
		while ((*a)->value < median_a)
		{
			pb(b, a, PRINT);
		}
	}

	median_b = ft_find_median(*b);
	printf("The median of b is : %d\n", median_b);
	/*while ((*b)->value < median_b)
	{
		rb(b, PRINT);
		while ((*b)->value > median_b)
		{
			pa(a, b, PRINT);
		}
	}*/
}
