class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int left = 1;
        int right = *max_element(nums.begin() , nums.end());
        int ans = -1;
        while (left <= right){
            int mid = (left + right)/2;
            int div = 0;
            int sum = 0;
            for (int j = 0; j < n; j++){
                div = ceil((double)nums[j]/mid);
                sum = sum + div;
            }
            if (sum <= threshold){
                ans = mid;
               right = mid-1;
            }else{
                left = mid+1;
            }
        }
        return ans;
    }
};