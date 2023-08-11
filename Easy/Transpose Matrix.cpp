#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int R = matrix.size();
        int C = matrix[0].size();
        vector<vector<int>> res(C,vector<int>(R,0));
        for(int r=0;r<R;r++){
            for(int c=0;c<C;c++){
                res[c][r] = matrix[r][c];
            }
        }
        return res;   
    }
};
