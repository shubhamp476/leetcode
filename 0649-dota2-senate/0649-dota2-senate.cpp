class Solution {
public:
    queue<int>r;
    queue<int>d;
    string predictPartyVictory(string senate) {
        int n = senate.size();
        for(int i = 0 ; i < n ; i++){
            if(senate[i] == 'R'){
                r.push(i);
            }
            else{
                d.push(i);
            }
        }
        while(d.size() > 0 && r.size()>0){
            int r_index = r.front();
            int d_index = d.front();
            r.pop();
            d.pop();
            if(r_index < d_index){
                r.push(r_index + n);
            }
            else{
                d.push(d_index + n);

            }

        }
        return d.size() >r.size() ? "Dire" : "Radiant";
        
    }
};