class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char, int> c;
        for(int i=0; i<s.size(); i++){
            c[s[i]]++;
        }
        int mv=0;
        int mc=0;
        for(auto x: c){
            if(x.first=='a' || x.first=='e' || x.first=='i' || x.first=='o' || x.first=='u'){
                if(mv < x.second){
                    mv=x.second;
                }
            }
            else{
                if(mc < x.second){
                    mc = x.second;
                }
            }
        }
        return mv+mc;
    }
};