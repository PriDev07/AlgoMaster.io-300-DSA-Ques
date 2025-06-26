// Given an integer array nums, return the number of subarrays filled with 0.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Input: nums = [1,3,0,0,2,0,0,4]
// Output: 6

#include<bits/stdc++.h>
using namespace std;
long long zeroFilledSubarray(vector<int>& nums) {
        long long count=0;
        vector<long long>zeroGroups;
        for(long long i=0;i<nums.size();i++){
            if(nums[i]==0){
                count++;
            }else{
                if(count>0){
                    zeroGroups.push_back(count);
                    count=0;
                }
            }
        }
        if(count>0){
            zeroGroups.push_back(count);
        }
        long long ans=0;
        for(long long i=0;i<zeroGroups.size();i++){
            ans+=(zeroGroups[i]*(zeroGroups[i]+1))/2;
        }
        return ans;
    }