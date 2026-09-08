class Solution {
public:
    string makeGood(string s) {
        // stack<char> st;
        // for(int i=0; i<s.size(); i++){
        //     if(!st.empty()){
        //         if(abs(st.top()-s[i]) == 32){
        //             // cout << st.top()<<" ";
        //             // st.push(s[i]);
        //             // st.pop();
        //             st.pop();
        //         }
        //     }
        //     else{
        //         st.push(s[i]);
        //     }
        // }
        // string k="";
        // while( !st.empty()){
        //      k+= st.top();
        //      st.pop();
        // }
        // reverse(k.begin(), k.end());
        // return k;

        stack<char>st;
        for(int i=0; i<s.size(); i++){
            if(st.empty() || abs(st.top()-s[i]) != 32){
                st.push(s[i]);
            }
            else if(abs(st.top()-s[i]) == 32){
                st.pop();
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