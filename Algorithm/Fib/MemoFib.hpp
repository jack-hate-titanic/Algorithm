//
//  MemoFib.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/16.
//

#ifndef MemoFib_hpp
#define MemoFib_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int memoFib(int number);

int helper(vector<int>& memo,int number);

#endif /* MemoFib_hpp */
