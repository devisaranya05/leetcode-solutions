class Solution {
public:
    string clearDigits(string s) {
        vector<char> st;
        for(int i=0; i<s.size(); i++){
            if((s[i] >='A' && s[i]<='Z') || (s[i] >='a' && s[i] <='z')){
                st.push_back(s[i]);
            }
            else{
                st.pop_back();
            }
        }
        string v;
        for(int i=0; i<st.size(); i++){
          v+=st[i];
        }
        return v;
    }
};