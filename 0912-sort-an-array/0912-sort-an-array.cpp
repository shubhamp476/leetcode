class Solution {
public:
    void merge(vector<int> &nums , int start , int mid , int end){
        vector<int> temp;
        int i = start ; 
        int j = mid+1;
        while( i <= mid && j <= end){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i <= mid){
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= end){
            temp.push_back(nums[j]);
            j++;
        }

        for(int idx=0 ; idx < temp.size() ; idx++){
            nums[idx+start] = temp[idx];
        }
    }

    void mergeSort(vector<int> &nums , int start , int end){
        if(start < end){
            int mid = start + (end-start)/2;

            mergeSort(nums , start , mid ); // left part
            mergeSort(nums , mid+1 , end ); // right part

            merge(nums , start , mid , end);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0 , nums.size()-1);
        return nums;
    }
};