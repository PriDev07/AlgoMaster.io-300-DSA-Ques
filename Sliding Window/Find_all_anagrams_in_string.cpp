// Given two strings s and p, return an array of all the start indices of p's anagrams in s. You may return the answer in any order.

// Input: s = "cbaebabacd", p = "abc"
// Output: [0,6]

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        // Using hash
        // Counting freq of both string chars
        vector<int> phash(26,0),shash(26,0),ans;
        if(s.size()<p.size()) return ans;
        for(int i=0;i<p.size();i++){
            phash[p[i]-'a']+=1;
            shash[s[i]-'a']+=1;
        }
        // if s string size is smaller than p string size then ans is []
        // Initialize left pointer with 0 and right with p string size
        int l=0,r=p.size()-1;
        while(r<s.size()){
            // If frequency of both is same then push left pointer in ans vector
            if(phash==shash){
                ans.push_back(l);
            }
            r+=1;
            if(r!=s.size()){
                // Add freq of next pointer
                shash[s[r]-'a']+=1;
            }
            // Remove frequency of old pointer
            shash[s[l]-'a']-=1;
            l+=1;
        }
        return ans;
    }
};