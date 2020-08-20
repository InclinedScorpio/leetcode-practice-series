class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int even_count= 0;
        for(int i=0;i<size(nums);i++){
            int count=0;
            while(nums[i]){
                nums[i]=nums[i]/10;
                count++;
            }
            
            if(count%2==0){
                even_count++;
            }
        }
        return even_count;
    }
};