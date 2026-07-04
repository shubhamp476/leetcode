class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char , int>m;
        for(char ch : s){
            m[ch]++;
        }
        vector<pair<char , int>>v;
        for(auto it: m){
            v.push_back(it);
        }
        sort(v.begin() , v.end() , [](auto a , auto b ){
            return a.second > b.second;
        });
        string ans = "";
        for(auto it : v){
            ans += string(it.second , it.first);
        }
        return ans;


    }
};