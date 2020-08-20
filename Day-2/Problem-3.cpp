class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
         short int good_pairs=0;
         short int nums_size = size(nums);
        for(int i=0;i<size(nums)-1;i++){
            for(int j=i+1;j<size(nums);j++){
                if(nums[i]==nums[j]){
                    good_pairs++;
                }
            }
        }
        
        return good_pairs;
    }
};