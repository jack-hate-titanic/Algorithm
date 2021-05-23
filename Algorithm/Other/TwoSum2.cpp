//
//  TwoSum2.cpp
//  Algorithm
//
//  Created by  森 王 on 2021/5/23.
//

#include "TwoSum2.hpp"

int twoSum2(int arr[],int arrLength,int target){
    map<int, int> value;
    for(int i=0;i<arrLength;i++){
        value.insert(pair<int, int>(arr[i],i));
    }
    for(int j=0;j<arrLength;j++){
        int sub=target-arr[j];
        if(value.count(sub)&&value[sub]!=j){
            cout<<value[sub]<<endl;
            cout<<j<<endl;
        };
    };
    return 0;
};
