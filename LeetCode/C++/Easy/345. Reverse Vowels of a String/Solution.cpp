class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' ||
        c=='u' || c=='U'){
            return true;
        }
        else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        char t;
        while(i<j){
          bool k= isvowel(s[i]);
          bool l= isvowel(s[j]);
           if(k==1 && l==1){
               t= s[i];
               s[i]=s[j];
               s[j]=t;
               i++;
               j--;
           }
           else if(k==1 && l==0){
                j--;
           }
           else if(k==0 && l==1){
            i++;
           }
           else{
            i++;
            j--;
           }
        }
        return s;
    }
};