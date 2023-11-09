class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
       
       int n = mat.size();
       int sum = 0;
        for (int i = 0; i < n; i++) {
        sum += mat[i][i]; // Add the element from the primary diagonal
        sum += mat[i][n - 1 - i]; // Add the element from the secondary diagonal
        }
    
    // If the matrix has an odd size, subtract the middle element to avoid double-counting
    if (n % 2 == 1) {
        int mid = n / 2;
        sum -= mat[mid][mid];
    }
    
    return sum;
    }
};