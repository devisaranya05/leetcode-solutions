class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int right;
        int left=0;
        int c=0;
        int mc=100;
        for(right=0; right<blocks.size(); right++){
            if(blocks[right]=='W'){
                c++;
            }
            if(right >= k-1){
                if(mc > c){
                    mc = c;
                }
                if(blocks[left]=='W'){
                    c--;
                }
                left++;
            }
        }
        return mc;
    }
};