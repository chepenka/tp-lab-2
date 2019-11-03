#pragma once
#include <iostream>

template<typename T>
bool compare(T arg1, T arg2) {
	if (arg2 > arg1)
		return 1;
	else
		return 0;
};
template<>
bool compare(char* arg1, char* arg2) {
	if (strlen(arg1) < strlen(arg2))
		return 1;
	else
		return 0;
};

template <typename T>
static void printArr(T* arr, int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

template <typename T>
void merge(T* a, int left, int right)
{
	int size = right - left + 1;
	T* b = new T[size]; // сюда сливаем 2 будущие части массива
	for (int i = 0; i < size; i++) {
		b[i] = 0;
	}
	int a1 = left; // начало первой части массива
	int const_a2 = (right + left) / 2 + 1; // начало второй части массива
	int a2 = (right + left) / 2 + 1; // начало второй части массива
	int count = 0;
	bool flag_a = false; // если лева€ часть уже полностью перенесена в массив "b" = true
	bool flag_b = false; // если права€ часть уже полностью перенесена в массив "b" = true

	while (1) {
		if (compare(a[a1], a[a2])) {
			b[count] = a[a1];
			a1++;
			count++;
		}
		else {
			b[count] = a[a2];
			a2++;
			count++;
		}
		if (a2 == right + 1) {
			flag_b = true;
			break;
		}
		if (a[a1] == a[const_a2]) {
			flag_a = true;
			break;
		}
	}
	// Ќеиспользованные элементы добавл€ем в массив b
	if (flag_a == true)
		for (int i = a2; i <= right; i++) {
			b[count] = a[i];
			count++;
		}
	else if (flag_b == true)
		for (int i = a1; i < const_a2; i++) {
			b[count] = a[i];
			count++;
		}
	// ѕереносим слитые элементы обратно в массив "a" 
	count = 0;
	for (int i = left; i <= right; i++) {
		a[i] = b[count];
		count++;
	}
	delete[] b;
}

template <typename T>
void grid(T* array, int left, int right) { // –азбиваем массив, затем сливаем
	if (right - left + 1 < 2)
		return;
	if (right - left + 1 == 2) {
		if (!compare(array[left], array[left + 1]))
			std::swap(array[left], array[left + 1]);
		return;
	}
	// –аздел€ем массив на 2 части
	grid(array, left, (right + left) / 2); // –азбиваем левую часть
	grid(array, ((right + left) / 2) + 1, right); // –азбиваем правую часть
	merge(array, left, right); // —ливаем 2 части массива
}

template <typename T>
void msort(T* array, int n)
{
	grid(array, 0, n - 1);
}