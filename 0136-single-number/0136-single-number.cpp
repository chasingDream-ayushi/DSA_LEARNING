class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (nums[i] == nums[j]){
                    count++;
                }
            }
            if (count == 1){
                return nums[i];
            }
            else{
                count = 0;
            }
        }
        return -1;
    }
};