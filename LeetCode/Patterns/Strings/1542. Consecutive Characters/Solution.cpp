class Solution {
public:
    int maxPower(string s) {
        int a=1;
        int m=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]==s[i+1]){
                a++;
            }
            else{
                m = max(a, m);
                a=1;
            }
        }
        return max(a, m);
    }
};