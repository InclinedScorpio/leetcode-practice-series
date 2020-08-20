class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int f_num=-1;
        int s_num=-1;
        for(int i=0;i<size(nums);i++){
            if(f_num<=nums[i]){
                s_num=f_num;
                f_num=nums[i];
            }else if(s_num<nums[i]){
                s_num = nums[i];
                
            }
        }
        return (f_num -1)* (s_num-1);
    }
};


// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {
        
//        sort(nums.begin(), nums.end(), greater<int>());
//         return (nums[0]-1)*(nums[1]-1);
//     }
// };