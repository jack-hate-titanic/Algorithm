//
//  Timer.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//

#include "Timer.hpp"

Timer::Timer(string name){
    startT = clock();
    lable =name;
    isEnd = false;
}

Timer::~Timer(){
    if (!isEnd)
    {
        endT = clock();
        double endTime = (double)(endT - startT) / 1000;
        cout << lable << ":" << endTime << "s" << endl;
    };
}
