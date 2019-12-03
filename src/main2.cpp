//
// Created by aklen on 13.10.2019.
//
#include <iostream>
#include "task2.h"

using namespace std;

template<typename T>
T gen(){
    static int a=10;
    return a++ ;
}

template<>
char* gen(){
    static unsigned a=0;
    a++;
    char* string=new char[a+1];
    for(size_t i=0;i<a;i++){
        string[i]='a'+i;
    }
    string[a]='\0';
    return string;
}

int main(){
    const size_t n=6;
    char** a=createArr<char*,n>(gen);
    for (int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}