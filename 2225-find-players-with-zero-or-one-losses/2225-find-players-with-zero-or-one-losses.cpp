class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int , int>lost_count;
        for(int i = 0; i <matches.size() ; i++){
            int looser = matches[i][1];
            lost_count[looser]++;

        }
        vector<int>neverLost;
        vector<int>oneLost;
        for(int i = 0; i <matches.size() ; i++){
            int looser = matches[i][1];
            int winner = matches[i][0];

            if(lost_count.find(winner) == lost_count.end() ){
                neverLost.push_back(winner);
                lost_count[winner] = 0;
            }
            if(lost_count[looser] == 1 ){
                oneLost.push_back(looser);
            }
        }
        sort(neverLost.begin() ,neverLost.end() );
        sort(oneLost.begin() ,oneLost.end() );

        return {neverLost ,  oneLost};
    }
};