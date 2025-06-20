// Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

// Input: nums = [3,2,3]
// Output: 3

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
        // Likely moose voting algo
        int freq=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){freq++;}
            else {freq--;}
        }
        cout<<freq;
        return ans;
}