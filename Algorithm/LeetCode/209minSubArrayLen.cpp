//
// Created by  森 王 on 2021/7/27.
//
using namespace std;
#include <iostream>
#include <vector>

// 时间复杂度(n)
// 空间复杂度(1)

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int n = nums.size();
        if (n == 0) {
            return 0;
        }
        int ans = INT_MAX;
        int start = 0, end = 0;
        int sum = 0;
        while (end < n) {
            sum += nums[end];
            while (sum >= s) {
                ans = min(ans, end - start + 1);
                sum -= nums[start];
                start++;
            }
            end++;
        }
        return ans == INT_MAX ? 0 : ans;
    }
};

//int main(){
//    int arr[]={2,3,1,2,4,3};
//    vector<int> vec(arr,arr+sizeof(arr)/sizeof(int));
//    int result=Solution().minSubArrayLen(7,vec);
//    cout<<result<<endl;
//    return 0;
//}