//
//  Timer.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//

#ifndef Timer_hpp
#define Timer_hpp

#include <stdio.h>
#include <time.h>
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

class Timer{
    clock_t startT,endT;
    string lable;
    bool isEnd;
public:
    Timer(string name="Time");
    ~Timer();
};

#endif /* Timer_hpp */
