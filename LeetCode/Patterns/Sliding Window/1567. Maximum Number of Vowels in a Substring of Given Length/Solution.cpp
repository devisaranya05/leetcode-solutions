class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int right, left=0;
        int c=0;
        int mc=0;
        for(right=0; right<s.size(); right++){
            if(isvowel(s[right])){
                c++;
            }
            if(right >= k-1){
                if(c>mc){
                    mc=c;
                }
                if(isvowel(s[left])){
                    c--;
                }
                left++;
            }
        }
        return mc;
    }
};