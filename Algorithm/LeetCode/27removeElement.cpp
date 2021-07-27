//
// Created by  森 王 on 2021/7/23.
//
using namespace std;
#include <iostream>
#include <vector>

class Solution{
public:
    int removeElement(vector<int>& nums,int val){
        int k=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
        }
        return k;
    }
};

//int main(){
//    int arr[] = {3,2,2,3};
//    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
//    int k=Solution().removeElement(vec,2);
//    cout<<k<<endl;
//    return 0;
//}
