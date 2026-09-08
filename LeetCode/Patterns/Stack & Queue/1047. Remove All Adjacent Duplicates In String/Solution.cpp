class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>st;
        // st.push(s[0]);
        for(int i=0; i<s.size(); i++){
        if(st.empty()){
            st.push(s[i]);
        }
        else if(st.top()==s[i]){
            st.pop();
           }
        else{
            st.push(s[i]);
           }
        }
        string k="";
        while(! st.empty()){
            k+=st.top();
            st.pop();
        }
        string d;
        for(int i=k.size()-1; i>=0; i--){
            d+=k[i];
        }
        return d;
    }
};