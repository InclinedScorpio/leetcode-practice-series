class Solution {
public:
    int numTeams(vector<int>& rating) {
        
        if(size(rating)<3){
            return 0;
        }
        
        int teams=0;
        for(int i=0;i<size(rating)-2;i++){
            for(int j=i+1;j<size(rating)-1;j++){
                for(int k=j+1;k<size(rating);k++){
                    if((rating[i]>rating[j]&&rating[j]>rating[k])||                                (rating[i]<rating[j]&&rating[j]<rating[k]))                             {
                        teams++;
                    }
                }
            }
        }
        return teams;
    }
};