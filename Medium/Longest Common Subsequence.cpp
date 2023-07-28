#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
class Solution {
private:
    int subs(string &t1,string &t2,int l1,int l2,vector<vector<int>> &dp){
        if(l1<0 || l2<0){
            return 0;
        }
        if(dp[l1][l2]!=-1){
            return dp[l1][l2];
        }
        if(t1[l1]==t2[l2]){
            return dp[l1][l2] = 1+subs(t1,t2,l1-1,l2-1,dp);
        }

        return dp[l1][l2] = max(subs(t1,t2,l1,l2-1,dp),subs(t1,t2,l1-1,l2,dp));
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int l1 = text1.size();
        int l2 = text2.size();
        vector<vector<int>> dp(l1,vector<int>(l2,-1));

        return subs(text1,text2,l1-1,l2-1,dp);
        
    }
};
