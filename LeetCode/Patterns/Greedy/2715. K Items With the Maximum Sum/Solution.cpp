class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int s=0;
        int v = numZeros;
        if(k <= numOnes){
            return k;
        }
        else{
            s += numOnes;
            if(k-s <= numZeros){
                return s;
            }
            else{
                if((k - s - v) <= numNegOnes){
                    s -= (k-s-v);
                    return s;
                }
            }
        }
        return s;
    }
};