class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> v;
        vector<char> c;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='#'){
                if( !v.empty()) v.pop_back();
            }
            else{
                v.push_back(s[i]);
            }
        }
        for(int i=0; i<t.size(); i++){
            if(t[i]=='#'){
                if((!c.empty())) c.pop_back();
            }
            else{
                c.push_back(t[i]);
            }
        }
        
        return v==c;
    }
};