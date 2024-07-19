class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n); 
        vector<int> rigthMax(n);

        int leftMaxi = height[0];
        for(int i=0; i<n; i++){
            leftMaxi = max(leftMaxi, height[i]);
            leftMax[i] = leftMaxi;
        } 

        int rightMaxi = height[n-1];
        for(int i=n-1; i>=0; i--){
            rightMaxi = max(rightMaxi, height[i]);
            rigthMax[i] = rightMaxi;
        } 

        int sum = 0;
        for(int i=1; i<n-1; i++){
            sum += min(leftMax[i], rigthMax[i]) - height[i];
        }

        return sum;
    }
};