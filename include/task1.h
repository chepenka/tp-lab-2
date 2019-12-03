#include <cmath>
#include <vector>
#include <string.h>
using namespace std;

template <typename T>
bool compare(T val_1, T val_2)
{
    return val_1 < val_2;
}

bool compare(char* str_1, char* str_2)
{
    return strlen(str_1) < strlen(str_2);
}

template <typename T>
void merge(T* begin, int count)
{
    auto left = begin, right = begin + (int)ceil(count / 2.0);
    auto startRight = right;
    vector <T> newVector;

    for (int i = 0; i < count; i++)
    {

        if (left != startRight && (right - begin == count || compare(*left, *right) /**left < *right*/))
        {
            newVector.push_back(*left);
            left++;
        }
        else
        {
            newVector.push_back(*right);
            right++;
        }
    }

    int j = 0;
    for (auto i = begin; i != begin + count; i++, j++)
    {
        *i = newVector[j];
    }
}

template <typename T>
void msort(T* arr, int n)
{
	if (n < 2)
		return;
	else
	{
		msort(arr, ceil(n / 2.0)); // left
		msort(arr + (int)ceil(n / 2.0), n - ceil(n / 2.0)); // right
		merge(arr, n);
	}
}