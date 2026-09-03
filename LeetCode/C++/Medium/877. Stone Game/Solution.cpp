class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int a=0;
        int b=0;
        for(int i=piles.size()-1; i>0; i-=2){
            a += piles[i];
            b += piles[i-1];
        }
        if(a > b){
            return true;
        }
        return false;
    }
};