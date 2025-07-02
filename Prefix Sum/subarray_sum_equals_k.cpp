// Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Input: nums = [1,1,1], k = 2
// Output: 2

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int count =0;
        //Brute Force - TC: O(N^3)
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0;
        //         for(int x=i;x<=j;x++){
        //             sum+=nums[x];
        //         }
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }

        //Better solution - TC: O(N^2)
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum==k){
        //             count++;
        //         }
        //     }
        // }
        // return count;

        // Optimal solution TC - O(N^2)  SC- O(N)
        map<int,int>mpp;
        mpp[0]=1;
        int pfs = 0, cnt =0;
        for(int i=0;i<n;i++){
            pfs+=nums[i];
            int remove = pfs-k;
            cnt+=mpp[remove];
            mpp[pfs]+=1;
        }
        return cnt;
    }
};