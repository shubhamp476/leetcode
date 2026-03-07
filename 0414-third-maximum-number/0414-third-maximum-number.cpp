class Solution {
public:
    int thirdMax(vector<int>& nums) {
        long long max = LLONG_MIN;
        long long sMax = LLONG_MIN;
        long long tMax = LLONG_MIN;
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == max || nums[i] == sMax || nums[i] == tMax)
                continue;
            if(nums[i] > max) {
                tMax = sMax;
                sMax = max;
                max = nums[i];
            }
            else if(nums[i] > sMax){
                tMax = sMax;
                sMax = nums[i];
            }
            else if(nums[i] > tMax){
                tMax = nums[i];
            }
        }
        return (tMax == LLONG_MIN) ? max : tMax;
    }
};