class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int c = 0;
        vector<int> rows(n),cols(m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rows[i] += mat[i][j];
                cols[j] += mat[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0; j<m;j++){
                c += (rows[i]==1 and cols[j]==1 and mat[i][j]);
            }
        }
        return c;
    }
};