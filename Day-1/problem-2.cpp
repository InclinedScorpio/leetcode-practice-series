class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        
        vector<int> res_store;
        for(int i=0;i<size(nums)/2;i++){
            res_store.push_back(nums[i]);
            res_store.push_back(nums[i+n]);
        }
        return res_store;
    }
};