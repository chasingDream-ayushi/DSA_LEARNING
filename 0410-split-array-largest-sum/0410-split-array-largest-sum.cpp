class Solution {
public:
    bool canSplit(vector<int>& nums, int k, int mid) {
        int count = 1;  // number of subarrays
        long long currSum = 0;

        for (int num : nums) {
            if (currSum + num > mid) {
                count++;           // start a new subarray
                currSum = num;     // reset sum
                if (count > k) return false;  // too many subarrays
            } else {
                currSum += num;
            }
        }
        return true; // can split into ≤ k subarrays
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        long long high = accumulate(nums.begin(), nums.end(), 0LL);
        int ans = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                ans = mid;         // possible answer
                high = mid - 1;    // try smaller
            } else {
                low = mid + 1;     // need larger sum
            }
        }
        return ans;
    }
};
