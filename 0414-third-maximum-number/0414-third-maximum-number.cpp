class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n =  nums.size();
        long largest = LONG_MIN;
        long secondLargest = LONG_MIN;
        long thirdLargest = LONG_MIN;
        bool hasThird = false;

        for (int i = 0; i < n; i++){
            if (largest < nums[i]){
                largest = nums[i];
            }
        }
        for (int i = 0; i < n; i++){
            if (nums[i] != largest && nums[i] > secondLargest){
                secondLargest = nums[i];
            }
        }
        for (int i = 0; i < n; i++){
            if (nums[i] != secondLargest && nums[i] > thirdLargest && nums[i] < secondLargest){
                thirdLargest = nums[i];
                hasThird = true;
            }
        }
        return hasThird ? thirdLargest : largest;
        
    }
};