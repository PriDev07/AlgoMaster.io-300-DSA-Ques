// Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

//Input: n = 2
//Output: [0,1,1]



#include<bits/stdc++.h>
using namespace std;
int noOne(int n){
        int val=0;
        while(n){
            if(n%2!=0){
                val++;
            }
            n/=2;
        }
        return val;

    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            ans.push_back(noOne(i));
        }
        return ans;
    }