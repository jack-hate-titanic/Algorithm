//
// Created by  森 王 on 2021/7/26.
//
using namespace std;
#include <iostream>
#include <string>

class Solution {
public:
    bool isPalindrome(string s) {
        int l=0,r=s.length()-1;
        while(l<r){
            if(!isalnum(s[l])){
                l++;
                continue;
            }
            if(!isalnum(s[r])){
                r--;
                continue;
            }
//            cout<<s[l]<<l<<endl;
//            cout<<s[r]<<r<<endl;
            if(tolower(s[l])==tolower(s[r])){
                l++;
                r--;
            }else{

                return false;
            }
        }
        return true;
    }
};

//int main(){
//    string str="race a car";
//    bool bool1 = Solution().isPalindrome(str);
//    cout<<bool1<<endl;
//    return 0;
//}