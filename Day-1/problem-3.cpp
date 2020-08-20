class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
     
        vector<bool> res_store;
        int largest = candies[0];
        for(int i=0;i<size(candies);i++){
            if(candies[i]>largest){
                largest=candies[i];
            }
        }
        
        for(int i=0;i<size(candies);i++){
            if(candies[i]+extraCandies>=largest){
                res_store.push_back(true);
            }else{
                res_store.push_back(false);
            }
        }
        return res_store;
    }
};