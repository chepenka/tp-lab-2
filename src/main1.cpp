//
// Created by aklen on 13.10.2019.
//
#include <iostream>
#include "task1.h"
#include "string.h"
using namespace std;

int main(){
    int* a=new int[10]{1,5,2,3,4,2313,2332,123,3123,222};
    for(int i=0;i<10;i++){
        cout<<a[i]<< " ";
    }
        cout<<"\n";
    msort(a,10);
    for(int i=0;i<10;i++){
        cout<<a[i]<< " ";
    }
    cout<<"\n";
    char* b[10]{(char*)"add",(char*)"a",(char*)"asddsa",(char*)"asdd",(char*)"as",(char*)"asddsaddas",(char*)"sad",(char*)"dsa",(char*)"asdd",(char*)"adsdasddsa"};
    for(int i=0;i<10;i++){
        cout<<b[i]<< " ";
    }
    cout<<"\n";
    msort(b,10);
    for(int i=0;i<10;i++){
        cout<<b[i]<< " ";
    }
    return 0;
}