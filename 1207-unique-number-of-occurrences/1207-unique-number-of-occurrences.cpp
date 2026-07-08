class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>occ(2001);
        for(int x : arr){
            occ[x+1000]++;
        }
        sort(occ.begin() , occ.end());
        for(int i = 0 ; i < 2001 ; i++){
            if(occ[i] != 0 && occ[i] == occ[i-1]  ){
                return false;
            }
        }
        return true;

    }
};