//
// Created by  森 王 on 2021/7/24.
//
using namespace std;
#include <iostream>
#include <cassert>
#include <vector>

class Solution{
public:
    void sortColor(vector<int>& nums){
        int zero=-1;
        int two=nums.size();
        for(int i=0;i<two;){
            if(nums[i]==1){
                i++;
            }else if(nums[i]==0){
                zero++;
                swap(nums[i],nums[zero]);
                i++;
            }else if(nums[i]==2){
                two--;
                swap(nums[i],nums[two]);
            }
        }
    }

    void swap(int& first,int& second){
        int temp=first;
        first=second;
        second=temp;
    }
};




//int main(){
//    int nums[] = {2,0,2,1,1,0};
//    vector<int> vec(nums,nums+sizeof(nums)/sizeof(int));
//    Solution().sortColor(vec);
//    for(int i=0;i<vec.size();i++){
//        cout<<vec[i]<<endl;
//    }
//    return 0;
//}