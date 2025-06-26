// Given an unsorted integer array nums. Return the smallest positive integer that is not present in nums.

// You must implement an algorithm that runs in O(n) time and uses O(1) auxiliary space.

// Input: nums = [1,2,0]
// Output: 3

#include<bits/stdc++.h>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
        //Using hashset
        set<int>st;
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int counter=1;
        for(int i=0;i<st.size();i++){
            if(st.find(counter)==st.end()){
                return counter;
            }
            counter++;
        }
        return counter;
    }