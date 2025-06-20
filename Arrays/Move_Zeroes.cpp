// Move Zeroes
//Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Input: nums = [0,1,0,3,12]
//Output: [1,3,12,0,0]
#include<bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
        int l=0,r=0;
        while(r<nums.size()){
            if(nums[r]!=0){
                swap(nums[l],nums[r]);
                l++;
            }
            r++;
        }
}