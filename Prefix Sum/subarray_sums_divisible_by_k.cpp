// Given an integer array nums and an integer k, return the number of non-empty subarrays that have a sum divisible by k.

// A subarray is a contiguous part of an array.


// Input: nums = [4,5,0,-2,-3,1], k = 5
// Output: 7

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        map<int,int>mpp;
        mpp[0]=1;
        int pfs = 0, cnt =0;
        for(int i=0;i<n;i++){
            pfs+=nums[i];
            int check = pfs%k;
            if(check<0){
                check = check +k;
            }
            cnt+= mpp[check];
            mpp[check]+=1;
        }
        return cnt;
    }
};

