class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int p=1;
        int n= grid.size();
        int l = grid[0].size();
        vector<vector<int>> a(n, vector<int>(l));
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                p *= grid[i][j];
            }
        }
        int k = p;
        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[i].size(); j++){
                int t= k/grid[i][j];
                a[i][j] = t%12345;
            }
        }
        return a;
    }
};