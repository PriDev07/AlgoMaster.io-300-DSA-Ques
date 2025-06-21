//Given two integers left and right that represent the range [left, right], return the bitwise AND of all numbers in this range, inclusive.

//Input: left = 5, right = 7
//Output: 4




#include<bits/stdc++.h>
using namespace std;
int rangeBitwiseAnd(int left, int right) {
    
        //Brute force
        // long long count = left;
        // long long i = left+1;
        // while(count && i<=right){
        //     count &= i;
        //     i++;
        // }
        // return count;

        // Optimal solution
        int shift =0;
        while(left<right){
            left>>=1;
            right>>=1;
            ++shift;
        }
        return left<<shift;
    }