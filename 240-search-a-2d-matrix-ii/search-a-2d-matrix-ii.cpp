class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int m = matrix[0].size();
      int n = matrix.size();
      int i=0;
      int j=m-1;
      while(i<n && j>=0){
           if(matrix[i][j]<target) i++;
           else if(matrix[i][j] == target) return true;
           else j--;
      }

      return false;
    }
};