class Solution {
public:
    string defangIPaddr(string address) {
        
        string res_store = "";
        for(int i=0;i<address.length();i++){
            if(address[i]!='.'){
                res_store+=address[i];
            }else{
                res_store+="[.]";
            }
        }
        return res_store;
        
    }
};