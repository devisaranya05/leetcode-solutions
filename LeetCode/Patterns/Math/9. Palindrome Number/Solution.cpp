class Solution {
public:
    bool isPalindrome(int x) {
        long long int org = x, res=0;
        if (x<0){
            return false;
        }
        else{
            while(org!=0){
            res = res*10 + org%10;
            org=org/10;
            }
            if (res == x){
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};