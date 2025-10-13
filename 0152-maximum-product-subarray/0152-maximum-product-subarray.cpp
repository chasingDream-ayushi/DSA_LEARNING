class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int largest = nums[0];
        for (int i = 0; i < n; i++){
            int product = 1;
            for (int j = i; j < n; j++){
                product = product * nums[j];
                largest = max(largest , product);
            }
        }
        return largest;
    }
};