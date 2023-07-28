class Solution {
private:
    void lexi(vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans,int freq[]){
        if(nums.size()==ds.size()){
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                lexi(nums,ds,ans,freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> ds;
        vector<vector<int>> ans;
        int freq[nums.size()];
        for(int k=0;k<nums.size();k++){
            freq[k] = 0;
        }
        lexi(nums,ds,ans,freq);
        return ans;
    }
};
