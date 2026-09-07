class Solution {
public:
    int maxArea(vector<int>& height) {
        int p;
        int m=0;
        int l=0;
        int r=height.size()-1;
        while(l<r){
            int k = min(height[l],height[r]);
            p = k*(r-l);
            m = max(m,p);
            if(height[l] < height[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return m;







        //  int p;
        // int m = 0;
        // int l = 0;
        // int r = height.size() - 1;

        // while(l < r) {
        //     int k = min(height[l], height[r]);
        //     p = k * (r - l);

        //     m = max(m, p);

        //     if(height[l] < height[r]) {
        //         l++;
        //     }
        //     else {
        //         r--;
        //     }
        // }

        // return m;
    }
};