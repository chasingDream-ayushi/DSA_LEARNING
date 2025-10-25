class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        unordered_map<int , int> mp;
        vector<int> nums;
        for (int i = 0; i < n; i++){
            mp[arr[i]] = 1;
        }
        int num = 1;
        while (nums.size() < k){
            if (mp.find(num) == mp.end()){
                nums.push_back(num);
            }
            num++;
        }
        return nums[k-1];
    }
    
};