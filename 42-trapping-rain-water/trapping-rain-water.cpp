class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>left(n),right(n);
        if(n<=2) return 0;
        left[0] = 0;
        int leftMax = height[0];
        for(int i=1;i<n;i++){
            left[i] = leftMax;
            leftMax = max(leftMax,height[i]);
        }

        right[n-1] = 0;
        int rightMax = height[n-1];
        for(int i=n-2;i>=0;i--){
            right[i] = rightMax;
            rightMax = max(rightMax,height[i]); 
        }
        int trap = 0;
        for(int i=1;i<n-1;i++){
            if(height[i]<left[i] and height[i]<right[i]){
                trap += min(left[i],right[i]) - height[i];
            }
        }
        
        return trap;
    }
};