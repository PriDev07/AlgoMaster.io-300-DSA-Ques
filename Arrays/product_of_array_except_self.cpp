// Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

// You must write an algorithm that runs in O(n) time and without using the division operation.

// Input: nums = [1,2,3,4]
// Output: [24,12,8,6]

#include<bits/stdc++.h>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> prefixprod(n),suffixprod(n),ans(n);
        prefixprod[0]=nums[0];
        for(int i=1;i<n;i++){
            prefixprod[i]=prefixprod[i-1]*nums[i];
        }
        suffixprod[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixprod[i]=suffixprod[i+1]*nums[i];
        }
        ans[0]=suffixprod[1];
        ans[n-1]=prefixprod[n-2];
        for(int i=1;i<n-1;i++){
            ans[i]=suffixprod[i+1]*prefixprod[i-1];
        }
        return ans;
    }