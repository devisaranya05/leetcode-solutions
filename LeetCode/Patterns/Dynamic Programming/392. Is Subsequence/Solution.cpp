class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j;
        i=0;
        j=0;
        int k=0;
        int len1 = s.size();
        int len2 = t.size();
        while(i<len1 && j<len2){
            if(s[i]==t[j]){
                i++;
                j++;
                k++;
            }
            else{
                j++;
            }
        }
        if(i==s.size()){
            return true;
        }
        else{
            return false;
        }
    }
};