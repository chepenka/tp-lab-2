
template <typename T, int size>
T* createArr(T (*generate)())
{
    T* arr = new T[size];
    for (int i = 0; i < size; i++)
        arr[i] = generate();

    return arr;
}
