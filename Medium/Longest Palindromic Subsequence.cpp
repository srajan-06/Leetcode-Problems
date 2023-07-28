#include<stdio.h>
#include<string.h>
#include<bits/stdc++.h>
#include<math.h>
class Solution {
private:
    int pali(string s,string t){
        int ls = s.size();
        int lt = t.size();
        vector<vector<int>> dp(ls+1,vector<int>(lt+1,0));
        for(int i=0;i<=ls;i++){
            dp[i][0] = 0;
        }
        for(int j=0;j<=lt;j++){
            dp[0][j] = 0;
        }
        for(int i=1;i<=ls;i++){
            for(int j=1;j<=lt;j++){
                if(s[i-1]==t[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }else{
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }

        }
        // if(ls<0 || lt<0){
        //     return 0;
        // }
        // if(dp[ls][lt]!=-1){
        //     return dp[ls][lt];
        // }
        // if(s[ls]==t[lt]){
        //     return dp[ls][lt] = 1+pali(s,t,ls-1,lt-1,dp);
        // }
        // return dp[ls][lt] = max(pali(s,t,ls,lt-1,dp),pali(s,t,ls-1,lt,dp));
        return dp[ls][lt];
    }
public:
    int longestPalindromeSubseq(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        return pali(s,t);
        
    }
};
