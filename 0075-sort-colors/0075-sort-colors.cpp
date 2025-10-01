class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        for (int i = 0; i < 2; i++){
            for (int k = j; k < n; k++){
                if (nums[k] == i){
                    int temp = nums[j];
                    nums[j] = nums[k];
                    nums[k] = temp;
                    j++;

                }
            }
        }
        
    }
};