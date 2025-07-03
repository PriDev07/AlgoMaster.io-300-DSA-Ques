// Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

// In other words, return true if one of s1's permutations is the substring of s2.

// Input: s1 = "ab", s2 = "eidbaooo"
// Output: true

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool checkInclusion(string p, string s) {
        // Same as finding all anagrams in a string
        vector<int> phash(26,0),shash(26,0);
        if(s.size()<p.size()) return 0;
        for(int i=0;i<p.size();i++){
            phash[p[i]-'a']+=1;
            shash[s[i]-'a']+=1;
        }
        int l=0,r=p.size()-1;
        while(r<s.size()){
            if(phash==shash){
                return true;
            }
            r+=1;
            if(r!=s.size()){
                shash[s[r]-'a']+=1;
            }
            shash[s[l]-'a']-=1;
            l+=1;
        }
        return false;
    }
};