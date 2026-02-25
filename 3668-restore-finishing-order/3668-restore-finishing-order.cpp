class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;
        for(int i = 0 ; i < order.size() ; i++){
            for(int j = 0 ; j < friends.size() ; j++){
                if(friends[j] == order[i]){
                    int x = order[i];
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};