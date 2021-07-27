//
// Created by  森 王 on 2021/7/26.
//

using namespace std;
#include <iostream>
#include <vector>
#include <string>
// 时间复杂度(n)
// 空间复杂度(1)

// 碰撞指针，用于
class Solution{
public:
    vector<int> twoSum(vector<int>& numbers,int target){
        int l=0,r=numbers.size()-1;
        while(l<r){
            if(numbers[l]+numbers[r]==target){
                int res[]={l+1,r+1};
                vector<int> result(res,res+2);
                return result;
            }else if(numbers[l]+numbers[r]<target){
                // 因为是有序数组，所以左边的指针+1
                l++;
            }else if(numbers[l]+numbers[r]>target){
                r++;
            }
        }
    }
};
//
//int main(){
//    int arr[]={2,5,6,7,9,10};
//    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
//    vector<int> result = Solution().twoSum(vec,18);
//    for(int i=0;i<result.size();i++){
//        cout<<result[i]<<endl;
//    }
//
//    return 0;
//}