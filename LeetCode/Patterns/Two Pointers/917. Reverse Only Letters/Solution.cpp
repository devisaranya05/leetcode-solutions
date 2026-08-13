class Solution {
public:
    string reverseOnlyLetters(string s) {
        string k;
        int i=0;
        int j=s.size()-1;
        while(i<=j){
          if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
            if((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z')){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else{
                 j--;
            }
          }
          else if((s[j]>='A' && s[j]<='Z') || (s[j]>='a' && s[j]<='z')){
            if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else{
                i++;
            }
          }
          else{
            i++;
            j--;
          }
        }
        return s;
    }
};