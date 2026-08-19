class Solution {
public:
    bool areNumbersAscending(string s) {
        int n;
        int m=0;
        bool r=true;
        for(int i=0; i<s.size(); i++){
              if((s[i] >='A' && s[i] <='Z') || (s[i]>='a' && s[i]<='z') || s[i]==' '){

              }
              else{
                   if((s[i+1] >='A' && s[i+1] <='Z') || (s[i+1]>='a' && s[i+1]<='z') || s[i+1]==' '){
                       n=s[i]-'0';
                       if(m >= n){
                          return false;
                       }
                       else{
                        m=n;
                       }
                       i++;
                   }
                   else{
                      n=(s[i]-'0')*10;
                      n += (s[i+1]-'0');
                      if(m >= n){
                          return false;
                       }
                       else{
                        m=n;
                       }
                       i++;
                   }
              }
        }
        return r;
    }
};