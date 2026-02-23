class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size()){
            return false;
        }
        unordered_map<char, int> hm;
        for(char ch : s){
            hm[ch]++;
        }

        for(char ch : t){
            if(hm.find(ch) == hm.end()){
                return false;
            }
            hm[ch]--;

            if(hm[ch] == 0){
                hm.erase(ch);
            }
        }

        return hm.empty();
    }
};