//
// Created by  森 王 on 2021/7/21.
//
using namespace std;
#include <iostream>
#include <vector>
// 时间复杂度O(n)
// 空间复杂度O(n)
//class Solution {
//public:
//    void moveZeroes(vector<int>& nums) {
//        vector<int> nonZeroElements;
//        for(int i=0;i<nums.size();i++){
//            if(nums[i]){
//                nonZeroElements.push_back(nums[i]);
//            }
//        }
//
//        for(int i=0;i<nonZeroElements.size();i++){
//            nums[i]=nonZeroElements[i];
//        }
//        for(int i=nonZeroElements.size();i<nums.size();i++){
//            nums[i]=0;
//        }
//    }
//};

class Solution{
public:
    void moveZeroes(vector<int>& nums,int val){
        int k=0;
        for(int i=0;i<nums.size();i++)
            if(nums[i]){
                nums[k]=nums[i];
                k++;
            }


        for(int i=k;i<nums.size();i++)
            nums[i]=0;

    }
};

//int main(){
//    int arr[]={1,2,0,4,0};
//    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
//    Solution().moveZeroes(vec,2);
//    for(int i=0;i<vec.size();i++)
//        cout<<vec[i]<<endl;
//    return 0;
//}
