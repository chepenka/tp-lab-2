#pragma once
#include <cstring>
#include <cstddef>
template <typename T> 
bool cmp(T a, T b) {
	return a < b;
}

template <>
bool cmp(char *a, char *b) {
	return strlen(a) < strlen(b);
}

template <typename T>
void msort(T *array, size_t sizeOfArray)
{
	size_t Step = 1; // step to split the sequence
	T *temp = new T[sizeOfArray];
	while (Step < sizeOfArray)
	{
		size_t index = 0;    // index of the resulting array
		size_t left = 0;      // left border
		size_t middle = left + Step;  // middle
		size_t right = left + Step * 2;  // right border
		do
		{
			middle = middle < sizeOfArray ? middle : sizeOfArray;  // sortable section does not go beyond the sequence
			right = right < sizeOfArray ? right : sizeOfArray;
			size_t index1 = left, index2 = middle; // indices of compared elements
			for (; index1 < middle && index2 < right; ) // until i1 has reached the middle and i2 has not reached the end
			{
				if (cmp(array[index1], array[index2])) {
					temp[index++] = array[index1++];
				} // fill the area of ​​the resulting sequence
				else {
					temp[index++] = array[index2++];
				}
			}
			// either index1 <middle or index2 <right - only one of the while statements can execute
			while (index1 < middle)
				temp[index++] = array[index1++]; // enter the remaining elements of the sorted areas
			while (index2 < right)
				temp[index++] = array[index2++]; // into the resulting array
			left += Step * 2; // move to the next sortable section
			middle += Step * 2;
			right += Step * 2;
		} while (left < sizeOfArray); // while the left border of the sorted area is within the sequence
		for (size_t i = 0; i < sizeOfArray; i++) // transfer the generated array back to array
			array[i] = temp[i];
		Step *= 2; // double the split step
	}
}