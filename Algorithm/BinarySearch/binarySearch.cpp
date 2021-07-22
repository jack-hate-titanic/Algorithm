//
// Created by  森 王 on 2021/7/20.
//

using namespace std;
#include <iostream>
#include <assert.h>
#include <cmath>
#include <ctime>

int binarySearch(int arr[],int n,int target){
    int l=0,r=n-1;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(target>arr[mid]){
            l=mid+1;
        }
        if(target<arr[mid]){
            r=mid-1;
        }
    }
    return -1;
}


//int main(){
//    int arr[]={1,2,33,46,58};
//    int target=binarySearch(arr, sizeof(arr)/ sizeof(arr[0]),58);
//    cout<<target<<endl;
//    return 0;
//}
