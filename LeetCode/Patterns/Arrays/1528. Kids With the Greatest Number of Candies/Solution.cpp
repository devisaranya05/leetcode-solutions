class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i;
        vector<bool>b;
        int m=candies[0];
        for(i=1; i<candies.size(); i++){
           if(candies[i]>m){
            m= candies[i];
           }
        }
        for(i=0; i<candies.size(); i++){
            if((candies[i]+ extraCandies) >= m){
                b.push_back(true);
            }
            else{
                b.push_back(false);
            }
        }
        return b;
    }
};