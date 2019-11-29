# Python program to find the maximum for 
# each and every contiguous subarray of 
# size k 
import heapq 

# Method to find the maximum for each 
# and every contiguous subarray of s 
# of size k 
def max_of_all_in_k(arr, n): 
	i = 0
	j = k-1
	
	# Create the heap and heapify 
	heap = arr[i:j + 1] 
	heapq._heapify_max(heap) 
	
	# Print the maximum element from 
	# the first window of size k 
	print(heap[0], end =" ") 
	last = arr[i] 
	i+= 1
	j+= 1
	nexts = arr[j] 
	
	# For every remaining element 
	while j < n: 
		
		# Add the next element of the window 
		heap[heap.index(last)] = nexts 
		
		# Heapify to get the maximum 
		# of the current window 
		heapq._heapify_max(heap) 
		
		# Print the current maximum 
		print(heap[0], end =" ") 
		last = arr[i] 
		i+= 1
		j+= 1
		if j < n: 
			nexts = arr[j] 
			
# Driver Function 
n, k = 10, 3
arr = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10] 
max_of_all_in_k(arr, n) 
