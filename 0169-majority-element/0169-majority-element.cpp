class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0;
        int count2 = 0;
        int j = nums[0];
        for (int i = 0; i < n; i++){
          
            if (nums[i] == j){
                count1++;
            }
            else{
                count2--;
                if (count1 == count2){
                    count1 = 0;
                    count2 = 0;
                    j = nums[i];
                }
            }
        }
        return j; 
    }
};