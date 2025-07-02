// Given an integer array nums and an integer k, return true if nums has a good subarray or false otherwise.

// A good subarray is a subarray where:

// its length is at least two, and
// the sum of the elements of the subarray is a multiple of k.
// Note that:

// A subarray is a contiguous part of the array.
// An integer x is a multiple of k if there exists an integer n such that x = n * k. 0 is always a multiple of k.

// Input: nums = [23,2,4,6,7], k = 6
// Output: true

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // vector<int> pfs;
        // pfs.push_back(0);
        // pfs.push_back(nums[0]);
        // for(int i=1;i<nums.size();i++){
        //     pfs.push_back(pfs[i]+nums[i]);
        // }
        // for(int i=nums.size();i>=0;i--){
        //     for(int j=i-2;j>=0;j--){
        //         if((pfs[i]-pfs[j])%k==0){
        //             return true;
        //         }
        //     }
        // }
        int pfs=0;
        map<int,int>mpp;
        mpp[0]=-1;
        for(int i=0;i<nums.size();i++){
            pfs+=nums[i];
            if(mpp.find(pfs%k)==mpp.end()){
                mpp[pfs%k]=i;
            }else if(i-mpp[pfs%k]>1){
                return true;
            }
        }
        return false;
    }
};