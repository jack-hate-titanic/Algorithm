//
//  Sort.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/7.
//

#include "Sort.hpp"

void Sort::swap(int &a, int &b){
    int swap=b;
    b=a;
    a=swap;
};

int *Sort::createRandomNumber(){
    static int arr[5];
    srand((unsigned) time(NULL));
    int length = getArrayLength();
    for(int i=0;i<length;i++){
        arr[i]=rand()%10+1;
    }
    return arr;
};

int Sort::getArrayLength(){
    return sizeof(Sort::arr)/sizeof(int);
};



