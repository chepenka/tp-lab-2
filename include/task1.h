#ifndef TASK1_H
#define TASK1_H

using namespace std;

template <typename T>
void merge(T* arr, int n) {
	int middle = n / 2; // находим середину сортируемой последовательности и рекурсивно вызываем функцию сортировки для каждой половины
	if (n > 1) { merge(arr, n / 2); }
	if (n > 1) { merge(arr + (n / 2), n - (n / 2)); }
	T* TMP = new T[n];
	int i = 0;   // индекс первого пути
	int j = middle; // индекс второго пути
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (arr[i] < arr[j]))) // записываем в формируемую последовательность меньший из элементов двух путей или остаток первого пути если j > r
		{
			TMP[k] = arr[i];
			i++;
		}
		else {
			TMP[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = TMP[i];
	}
}

template <>
void merge(char** arr, int n) {
	int middle = n / 2; // находим середину сортируемой последовательности и рекурсивно вызываем функцию сортировки для каждой половины
	if (n > 1) { merge(arr, n / 2); }
	if (n > 1) { merge(arr + (n / 2), n - (n / 2)); }
	char** TMP = new char* [n];
	int i = 0;   // индекс первого пути
	int j = middle; // индекс второго пути
	for (int k = 0; k < n; k++)
	{
		if ((j >= n) || ((i < n / 2) && (strlen(arr[i]) < strlen(arr[j])))) // записываем в формируемую последовательность меньший из элементов двух путей или остаток первого пути если j > r
		{
			TMP[k] = arr[i];
			i++;
		}
		else {
			TMP[k] = arr[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
	{
		arr[i] = TMP[i];
	}
}

#endif
