//Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

// Input: nums = [1,2,1,3,2,5]
// Output: [3,5]
#include<bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int>& nums) {
        // using hashmap TC(n logm) SC(m)
        vector<int> ans;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it : mp){
            if(it.second ==1){
                ans.push_back(it.first);
            }
        }
        return ans;

    }