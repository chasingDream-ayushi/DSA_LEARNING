class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n = nums.size();
        int el;
        sort(nums.begin() , nums.end());
        for (int i = 0; i < n; i++){
            if (nums[i] == nums[i+1]){
                break;
                el = nums[i];
            }
        }
        return el;
        
    }
};