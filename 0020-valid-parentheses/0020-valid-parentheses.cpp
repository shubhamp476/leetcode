class Solution {
public:
    bool isValid(string s) {
        stack<char>a;
        
        for(char ch : s){
            if(ch == '(' || ch == '[' || ch == '{'){
                a.push(ch);
            }
            else{
                if(a.empty()) return false;
                char t = a.top();
                a.pop();
                if( (ch == ')' && t != '(') ||
                    (ch == '}' && t != '{') ||
                    (ch == ']' && t != '[') ) {
                    return false;
                }

                    
            }
            
        }
        return a.empty();
    }
    
};