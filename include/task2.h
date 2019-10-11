//
//  task2.h
//  task2.2
//
//  Created by Андрей Журавлев on 10.10.2019.
//  Copyright © 2019 Андрей Журавлев. All rights reserved.
//

#ifndef task2_h
#define task2_h

template<typename T, const size_t N>
T* createArr(T (*gen)()) {
    T *arr = new T[N];
    for (size_t i = 0; i < N; i++)
        arr[i] = gen();
    return arr;
}

#endif /* task2_h */
