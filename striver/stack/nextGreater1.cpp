class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        // required time complexity is o(n)
        stack<int> s;
        int n = nums2.size();
        vector<int> v;
        unordered_map<int, int> m;

        int i=n-1;
        while(i >= 0){
            while(!s.empty() && s.top() <= nums2[i]){
                s.pop();
            } 
            
            if(s.empty()){
                m[nums2[i]] = -1;
            } 
            else{
                m[nums2[i]] = s.top();
            } 

            s.push(nums2[i]);
            i--;
        }

        for(int j=0; j<nums1.size(); j++){
            v.push_back(m[nums1[j]]);
        }

        return v;
    }
};