// You are given an integer array nums consisting of n elements, and an integer k.

// Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.

// Input: nums = [1,12,-5,-6,50,3], k = 4
// Output: 12.75000

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        int Maxsum = sum;
        for(int i=k;i<n;i++){
            sum-=nums[i-k];
            sum+=nums[i];
            Maxsum = max(Maxsum,sum);
        }
        return (double) Maxsum/k;
    }
};
