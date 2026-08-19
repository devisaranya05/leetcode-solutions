class Solution {
public:
    string sortSentence(string s) {
       vector<string>v(9);
       int m=0;
       string r="";
       for(int i=0; i<s.size(); i++){
        if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z')){
              r+=s[i];
        }
        else{
            if(s[i] != ' '){
            int k= s[i]-'1';
            if(m <= k){
                m=k;
            }
            v[k]=r;
            r="";
            }
        }
       }
       string d="";
       int j=0;
       while(j <= m){
        d+= v[j];
        j++;
         d+=' ';
       }
       d.pop_back();
       return d;
    }
};