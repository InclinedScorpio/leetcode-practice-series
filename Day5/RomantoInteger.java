class Solution {
    public int romanToInt(String s) {
        Map<String, Integer> map = new HashMap<>();
        
        map.put("I", 1);
        map.put("V", 5);
        map.put("X", 10);
        map.put("L", 50);
        map.put("C", 100);
        map.put("D", 500);
        map.put("M", 1000);
        
         int result = 0;
        for(int i=0;i<s.length();i++){
            int value1 = map.get(String.valueOf(s.charAt(i)));
            if(i+1 != s.length()){
                int value2 = map.get(String.valueOf(s.charAt(i+1)));
                if(value2>value1){
                    result += value2 - value1;
                    i++;
                }else
                    result += value1;
            }else
                result+= value1;
        }
        return result;
    }
}
