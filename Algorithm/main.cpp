//
//  main.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/1.
//
#include <iostream>
#include "Two Sum.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    int arr[5]={0,2,4,12,1};
    vector<int> value;
    value = twoSum(arr, 5, 14);
    
    for(vector<int>::iterator it=value.begin();it!=value.end();it++){
        cout<<*it<<endl;
    }

    return 0;
};
