//
//  binaryTransform.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/8.
//

#include "binaryTransform.hpp"


string transformBinary(int number){
    static int binary[8];
    int i=0;
    ostringstream result;// 定义字符串流，把数组转化为字符串流
    while(number>0){
        binary[i]=number%2;
        number=number/2;
        i++;
    }
    while (i>0) {
        i--;
        result<<binary[i];
    };
    
    
    return result.str();
};
