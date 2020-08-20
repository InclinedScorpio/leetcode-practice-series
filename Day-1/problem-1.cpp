class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
        cout<<nums.size();
        vector<int> res_store;
        int sum=0;
        for(int i=0;i<size(nums);i++){
            sum+=nums[i];
            res_store.push_back(sum);
        }
        return res_store;
    }
};