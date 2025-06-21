// Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

//Input: n = 11
//Output: 3

#include<bits/stdc++.h>
using namespace std;
int hammingWeight(long long n) {
        int count=0;
        for(int i=0;i<=32;i++){
            if(n){
                count+=(n&1);
                n>>=1;
            }
        }
        return count;
}