class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int Rsum = 0;
        for(int i : nums){
            Rsum += i;
        }
        int Lsum =0;
        for(int i = 0; i < nums.size(); i++){
            Rsum -= nums[i];
            if(Lsum == Rsum) return i;
            Lsum += nums[i] ;
        }
        return -1;
    }
};