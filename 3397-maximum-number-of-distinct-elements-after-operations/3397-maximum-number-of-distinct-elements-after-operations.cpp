class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end()); 
        
        long long lastUsed = LLONG_MIN;
        int count = 0;

        for (int num : nums) {
            
            long long candidate = max((long long)num - k, lastUsed + 1);
            if (candidate <= (long long)num + k) {
                count++;
                lastUsed = candidate;
            }
        }

        return count;
    }
};