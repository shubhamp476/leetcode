class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int lsum = 0;
        for(int num: nums){
            lsum += num; 
        }
        int n = nums.size();
        vector<int> result;
        int rsum = 0 ;
        for(int i = 0 ; i < n ; i++){
            lsum = lsum - nums[i];
            int x = abs(rsum - lsum);
            result.push_back(x);
            rsum += nums[i];
        }
        return result;
        
    }
};