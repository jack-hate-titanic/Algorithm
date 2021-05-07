//
//  bubbleSort.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//

#include "bubbleSort.hpp"
#include <iostream>
#include <string>
using namespace std;


// 冒泡排序的思想就是，通过两两比较，把大的值向右交换
void bubbleSort(){
    // 定义时间差
    Timer time1("time2");
    // 获取sort类
    Sort *sort=new Sort();
    // 获取随机数组
    int *p;
    p=sort->createRandomNumber();
    // 获取数组长度
    int arrLength=sort->getArrayLength();
    // 要考虑到如果数组本来就是有序的情况
    // 如果数组本来就是有序的话，那么arr[begin]<arr[begin-1]就永远不会成立
    
    for (int k = arrLength; k <= arrLength; k--)
    {
        bool flag = true; // 为什么放在这里，因为如果某一次循环的时候，已经有序了，就不用再往下执行了
        // 为什么begin是1，那么他前面的那个数就是begin-1
        for (int begin = 1; begin < arrLength; begin++)
        {
            if (*(p+begin) < *(p+begin-1))
            {
                sort->swap(*(p+begin),*(p+begin-1));
                flag = false;
            }
        };
        if (flag)
            break;
    }

    for (int i = 0; i < arrLength; i++)
    {
        cout << *(p+i) << endl;
    };
}
