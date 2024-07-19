class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        // travelling circularly here makes double array then mod it for circular loop
        stack<int> s;
        int n = nums.size();
        vector<int> v(n);

        // pushing an array in stack simply
        for(int i=n-1; i>=0; i--){
            s.push(nums[i]);
        }

        for(int i=n-1; i>=0; i--){
            while(!s.empty() && s.top() <= nums[i]){
                s.pop();
            } 

            if(s.empty()) v[i] = -1;
            else v[i] = s.top();
            s.push(nums[i]);
        }

        return v;
    }
};