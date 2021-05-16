//
//  MemoFib.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/16.
//

#include "MemoFib.hpp"

int memoFib(int number){
    if(number<1) return 0;
    vector<int> memo(number+1,0);
    memo[1]=memo[2]=1;
    return helper(memo,number);
};

int helper(vector<int>& memo,int number){
    if(memo[number]==0&&number>0){
        memo[number]=helper(memo,number-1)+helper(memo,number-2);
    }
    return memo[number];
};
