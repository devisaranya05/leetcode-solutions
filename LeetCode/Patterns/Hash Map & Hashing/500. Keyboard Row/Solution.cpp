class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string>ans;
        for(int i=0; i<words.size(); i++){
        int f=0, s=0, t=0;        
            for(int j=0; j<words[i].size(); j++){
                if(words[i][j]=='a' || words[i][j]=='A' || words[i][j]=='s' || words[i][j]=='S' || 
                words[i][j]=='d' || words[i][j]=='D' || words[i][j]=='f' || words[i][j]=='F' || 
                words[i][j]=='g' || words[i][j]=='G' || words[i][j]=='h' || words[i][j]=='H' ||
                words[i][j]=='j' || words[i][j]=='J' || words[i][j]=='k'|| words[i][j]=='K' ||
                 words[i][j]=='l' || words[i][j]=='L' ){
                    f++;
                }
                else if (words[i][j]=='z' || words[i][j]=='Z' || words[i][j]=='x' ||
                 words[i][j]=='X' || 
                words[i][j]=='c' || words[i][j]=='C' || words[i][j]=='v' || words[i][j]=='V' || 
                words[i][j]=='b' || words[i][j]=='B' || words[i][j]=='n' || words[i][j]=='N' ||
                words[i][j]=='m' || words[i][j]=='M' ){
                    s++;
                }
                else if (words[i][j]=='q' || words[i][j]=='Q' || words[i][j]=='w' 
                || words[i][j] =='W' || 
                 words[i][j]=='e' || words[i][j]=='E' || words[i][j]=='r' || words[i][j]=='R' || 
                words[i][j]=='t' || words[i][j]=='T' || words[i][j]=='y' || words[i][j]=='Y' ||
                words[i][j]=='u' || words[i][j]=='U' || words[i][j]=='i'|| words[i][j]=='I' ||
                 words[i][j]=='o' || words[i][j]=='O' || words[i][j]=='p' || words[i][j]=='P'){
                    t++;
                }
            }
            if(s==words[i].size() || f==words[i].size() || t==words[i].size()){
                     ans.push_back(words[i]);
            }
        }
        return ans;
    }
};