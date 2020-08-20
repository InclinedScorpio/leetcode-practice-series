class Solution {
public:
    int subtractProductAndSum(int n) {
        
        int mul_store=1;
        int add_store=0;
        while(n>0){
            short int temp =n%10;
            mul_store*=temp;
            add_store+=temp;
            n/=10;
        }
        return (int)mul_store-add_store;
    }
};