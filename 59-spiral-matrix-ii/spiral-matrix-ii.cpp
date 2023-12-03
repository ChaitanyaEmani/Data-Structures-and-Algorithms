class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n, vector<int>(n,1));
        int index = 1;
        int left = 0, right= n-1, top = 0, down = n-1;
        while(left <= right && top <= down){
            for(int j = left; j <= right; j++){
               mat[top][j] = index;
                index++;
            }
            top++;
            for(int i = top; i <= down; i++){
                mat[i][right] = index;
                index++;
            }
           
            right--;
            for(int j = right; j >= left; j--){
                mat[down][j] = index;
                index++;
            }
            down--;
            for(int i = down; i>=top; i--){
                    mat[i][left] = index;
                    index++;
                }
            left++;
        }
        return mat;

    }
};