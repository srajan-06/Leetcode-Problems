class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long long,int> pres;
        long long preSum = 0;
        int sac = 0;
        pres[0] = 1;
        for(int i=0;i<nums.size();i++){
            preSum += nums[i];
            sac += pres[preSum-k];
            pres[preSum]++;
        }
        return sac;
    }
};
