//
//  Fib.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/8.
//

#include "Fib.hpp"

int fib(int number){
    int first=0;
    int second=1;
    for(int i=0;i<number;i++){
        int swap=first+second;
        first=second;
        second=swap;
    }
    return first;
}
