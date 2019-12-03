//
// Created by aklen on 13.10.2019.
//
#include <iostream>
#include "task3.h"
#include <cstring>

using namespace std;

template<typename T>
T change(T a){
    static unsigned n=10;
    return a+(n++);
}

template<>
char* change(char* a){
    return (char*)"sad";
}

int main(){
    const size_t n=6;
    int a[n]{2,3,4,5,6,7};
    map<int,n>(a,change);
    for (size_t i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
    char* b[n]{(char*)"add",(char*)"a",(char*)"asddsa",(char*)"asdd",(char*)"as",(char*)"asddsaddas"};
    map<char*,n>(b,change);
    for (size_t i=0;i<n;i++){
        cout<<b[i]<<' ';
    }
    cout<<endl;
    return 0;
}