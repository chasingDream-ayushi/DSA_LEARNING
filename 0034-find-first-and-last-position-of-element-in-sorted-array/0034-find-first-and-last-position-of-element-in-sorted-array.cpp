class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int firstFound = -1;
        int lastFound = -1;
        
        for (int i = 0; i < n; i++){
            if (nums[i] == target){
                if (firstFound == -1){
                    firstFound = i;
                } 
                lastFound = i;
            
            }
            
        
        }
        return {firstFound,lastFound};
        
    }
    
};