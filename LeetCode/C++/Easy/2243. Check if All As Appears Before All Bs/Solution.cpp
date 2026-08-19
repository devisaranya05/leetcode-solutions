class Solution {
public:
    bool checkString(string s) {
        int c=0;
        for(int i=0; i<s.size()-1; i++){
            if((s[i] == 'b' && s[i+1]=='a')){
                return false;
            }
           if((s[i] != s[i+1])){
            c++;
           }
        }
        if(c >=2){
            return false;
        }
        return true;
    }
};