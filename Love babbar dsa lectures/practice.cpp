#include <iostream>
#include <math.h>
#include <limits.h>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// Given two integer arrays nums1 and nums2, return an array of
// their intersection. Each element in the result must be unique
// and you may return the result in any order.

// Input: nums1 = [1,2,2,1], nums2 = [2,2]
// Output: [2]

// void judgeSquareSum(int c) {
    //     long long int n = sqrt(c);
    //     long long int s = 0;
    //     long long int e = c;
    //     while(s <= c && s!=0){
    //         // int mid = s + (e - s)/2;
    //         if(((s*s)+(e*e))==c){
    //             cout<<"ans"<<s<<e<<endl;
    //             break;
    //         }
    //         else if(((s*s)+(e*e))<c && s!=0){
    //             s++;
    //             cout<<s<<" < "<<e<<endl;
    //         }
    //         else if(((s*s)+(e*e)>c && s!=0)){
    //             cout<<s<<" > (not update)"<<e<<endl;
    //             e--;
    //             cout<<s<<" > "<<e<<endl;
    //         }
            
    //     }
    //     cout<<s<<" not equal "<<e;
    // }


    // class Solution {
    // public:
    // int minSubArrayLen(int target, vector<int>& nums) {
    //     int s=0;
    //     int e=0;
    //     int minlen=INT_MAX;
    //     int sum=0;
    //     while(e<nums.size())
    //     {
    //         sum = sum + nums[e++];
    //         while(sum>=target)
    //         {
    //             minlen=min(minlen,e - s);
    //             sum = sum - nums[s++];
    //         }
    //     }
    //     return(minlen==INT_MAX)?0:minlen;  
    // }

    int ansSum(vector<int>& nums, int left, int right){
        sort(nums.begin(),nums.end());
        long long int sums = 0;
        for (int i = left; i < right; i++)
        {
            sums = sums + nums[i];
        }
        
        return sums;
        // return nums;
    }

    // void rangeSum(vector<int>& nums, int left,int right) {
    //     vector<int> arr;
    //     for(int i=0; i<nums.size();i++){
    //         int sum = 0;
    //         for(int j=i; j<nums.size();j++){
    //             sum = sum + nums[j];
    //             arr.push_back(sum);
    //         }
    //     }
    //     int ans = ansSum(nums, left, right);
    //     cout<<ans;
        // return arr;
// };

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> nums2 = {1,3,6,10,2,5,9,3,7,4};
    // int target = 9;
    // int ans = searchArr(nums, target);
    // cout<<ans;
    // vector<int> arr = {7,1,14,11}; 
    // judgeSquareSum(999999999);
    // cout<<ans;
    // cout<<234%10;

    int ans = ansSum(nums2,1,5);
    cout<<ans;
    // for(int i=0; i < 10; i++){
    //     cout<<ans[i]<<endl;
    // }
}
