class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>l;
        if(p.size()> s.size()){
            return l;
        }
        unordered_map<char, int> mp;
        for(int i=0; i<p.size(); i++){
            mp[p[i]]++;
        }
        unordered_map<char, int> m;
        int k = p.size();
        for(int i=0; i<p.size(); i++){
            m[s[i]]++;
        }
        if(m==mp){
            l.push_back(0);
        }
        for(int i=k; i<s.size(); i++){
              m[s[i]]++;
              m[s[i-k]]--;
              if(m[s[i-k]] == 0){
                m.erase(s[i-k]);
              }
              if(m==mp){
                l.push_back(i-k+1);
              }
        }
        return l;
    }
};