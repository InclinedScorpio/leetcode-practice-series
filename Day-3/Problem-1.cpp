class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
            
        vector<int> res_store;
        short int count=0;
        for(int i=0;i<size(nums);i++){
            count=0;
            for(int j=0;j<size(nums);j++){
                if(i!=j && nums[j]<nums[i]){
                    count++;
                }
            }
            res_store.push_back(count);
        }
        return res_store;
    }
};