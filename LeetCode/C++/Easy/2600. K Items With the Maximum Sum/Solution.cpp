class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int s=0;
        if(k <= numOnes){
            return k;
        }
        else{
            s += numOnes;
            if(k-s <= numZeros){
                return s;
            }
            else if(k-s > numZeros){
                if(k-s >= numNegOnes){
                    s -= k-s;
                    return s;
                }
            }
        }
        return s;
    }
};