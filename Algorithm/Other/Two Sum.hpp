//
//  Two Sum.hpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/23.
//

#ifndef Two_Sum_hpp
#define Two_Sum_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoSum(int arr[],int arrLength,int target);
#endif /* Two_Sum_hpp */


/**
 int arr[5]={0,2,4,12,1};
 
 try {
     vector<int> value;
     value = twoSum(arr, 5, 19);
     for(vector<int>::iterator it=value.begin();it!=value.end();it++){
         cout<<*it<<endl;
     }
 } catch (const char* msg) {
     cout<<msg<<endl;
 }
 return 0;
 */
