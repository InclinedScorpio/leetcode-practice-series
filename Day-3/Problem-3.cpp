class Solution {
public:
    int xorOperation(int n, int start) {
        int arr[n];
        short int store_res;
        for(int i=0;i<n;i++){
            if(i==0){
                store_res=start+2*i;
            }else{
                store_res=store_res^(start+2*i);
            }
        }
        return store_res;
    }
};