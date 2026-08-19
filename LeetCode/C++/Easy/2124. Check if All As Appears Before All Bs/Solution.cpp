class Solution {
public:
    bool checkString(string s) {
        int c=0;
        for(int i=0; i<s.size()-1; i++){
           if(s[i] != s[i+1]){
            cout << c << " ";
            c++;
           }
        }
        if(c >=2){
            return false;
        }
        return true;
    }
};