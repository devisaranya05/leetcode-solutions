class Solution {
public:
   bool is_vowel(char c){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                return true;
            }
            return false;
        }
    bool doesAliceWin(string s) {
         int c=0;
         for(int i=0; i<s.size(); i++){
            char k = s[i];
            if(is_vowel(k)){
                c++;
            }
         }
         if(c != 0){
            return true;
         }
         return false;

    }
};