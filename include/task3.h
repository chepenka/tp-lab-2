//
//  Header.h
//  task2.2
//
//  Created by Андрей Журавлев on 11.10.2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#ifndef task3_h
#define task3_h

template<class T>
T change1(T val)
{
    return val + 1;
}

template<>
char* change1(char* val)
{
    size_t n = strlen(val);
    for(size_t i = 0; i < n; i++)
        val[i] = val[i] + 1;
    return val;
}

template<typename T, const size_t N>
void map(T *arr, T (*change)(T val)) {
    for (size_t i = 0; i < N; i++)
        arr[i] = change(arr[i]);
}

#endif /* task3_h */
