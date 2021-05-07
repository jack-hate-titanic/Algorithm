//
//  Sort.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/7.
//

#ifndef Sort_hpp
#define Sort_hpp


#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

class Sort{
public:
    int arr[5];
    // 生成随机数
    int *createRandomNumber();
    // 交换两个数
    void swap(int &a,int &b);
    // 获取数组长度
    int getArrayLength();
    
    
};

#endif /* Sort_hpp */
