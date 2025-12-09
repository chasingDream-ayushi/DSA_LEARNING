class Solution {
public:
    bool fxn(int i ,vector<int> &nums,int target , vector<vector<int>> &dp){
        int n = nums.size();
        if (i == n){
            if (target == 0){
                return true;
            }
            return false;
        }
        if(dp[i][target] != -1){
            return dp[i][target];
        }
        bool in = false;
        if(nums[i] <= target){
            in = fxn(i+1 , nums , target - nums[i] , dp); 
        }
        bool ex = fxn(i+1 , nums , target,dp);
        
        return  dp[i][target] = in || ex;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        for (int i = 0; i < n; i++){
            target = target + nums[i];
        }
        if (target % 2 != 0) return false;
        target = target / 2;
        vector<vector<int>> dp(n , vector<int>(target+1 , -1));


        return fxn(0 , nums, target,dp);
        
    }
};