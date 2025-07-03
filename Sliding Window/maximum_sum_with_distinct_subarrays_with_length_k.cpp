// You are given an integer array nums and an integer k. Find the maximum subarray sum of all the subarrays of nums that meet the following conditions:

// The length of the subarray is k, and
// All the elements of the subarray are distinct.
// Return the maximum subarray sum of all the subarrays that meet the conditions. If no subarray meets the conditions, return 0.

// A subarray is a contiguous non-empty sequence of elements within an array.


// Input: nums = [1,5,4,2,9,9,9], k = 3
// Output: 15

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        long long maxSum=0,currSum=0;
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            mp[nums[i]]+=1;
            if(i>=k-1){
                if(mp.size()==k) maxSum = max(maxSum,currSum);
                currSum -= nums[i-k+1];
                mp[nums[i-k+1]]-=1;
                if(mp[nums[i-k+1]]==0) mp.erase(nums[i-k+1]);
            }
        }
        return maxSum;
    }
};