class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        long long sum = 0;
        int j=0;
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            while(sum-nums[j]>=target && j<=i){
                sum -= nums[j];
                j++;
            }
            if(sum>=target){
                if(ans==0 || ans>(i-j+1)){
                    ans = i-j+1;
                }
            }
        }
        return ans;
        
    }
};
