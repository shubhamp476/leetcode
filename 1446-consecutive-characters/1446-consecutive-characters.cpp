class Solution {
public:
    int maxPower(string s) {
        int start = 0;
        int count = 1;
        int maxS = 1; 
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == s[i+1]){
                count++;
            }
            else{
                maxS = max(maxS , count );
                count = 1;
            }
        }
        return maxS;
    }
};