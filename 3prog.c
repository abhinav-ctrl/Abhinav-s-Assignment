*/Insertion sort and selection sort:

Insertion sort:
Insertion Sort is a sorting algorithm where the array is sorted by taking one element at a time. The principle behind insertion sort is to take one element, iterate through the sorted array & find its correct position in the sorted array. Insertion sort works in a similar way as we arrange the deck of cards.
Algorithm for insertion sort:
Step 1 − If the element is the first one, it is already sorted.
Step 2 – Move to the next element.
Step 3 − Compare the current element with all elements in the sorted array.
Step 4 – If the element in the sorted array is smaller than the current element, iterate to the next element. Otherwise, shift all the greater element in the array by one position towards the right.
Step 5 − Insert the value at the correct position.
Step 6 − Repeat until the complete list is sorted.
As the average & worst-case complexity of this algorithm are O(n**2), where n is the number of elements, Insertion sort is not good for large data sets.


Selection sort:
Selection sort is the most conceptually simple of all the sorting algorithms. It works by selecting the smallest (or largest, if you want to sort from big to small) element of the array and placing it at the head of the array. Then the process is repeated for the remainder of the array; the next largest element is selected and put into the next slot, and so on down the line. Because a selection sort looks at progressively smaller parts of the array each time (as it knows to ignore the front of the array because it is already in order), a selection sort is slightly faster than bubble sort and can be better than a modified bubble sort.
Example:
For sorting the array 52314 First, 2 is inserted before 5, resulting in 25314 Then, 3 is inserted between 2 and 5, resulting in 23514 Next, one is inserted at the start, 12354 Finally, 4 is inserted between 3 and 5, 12345.
Time complexity: O(n2) as there are two nested loops. */




