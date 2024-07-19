class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // only valid when ans requires value not indeices
        int low = 0;
        int high = nums.size()-1;
        vector<int> v;
        sort(nums.begin(), nums.end());
        
        while(low < high){
            if(nums[low] + nums[high] == target){
                v.push_back(arr[low]);
                v.push_back(arr[high]);
                return v;
            }else if(nums[low] + nums[high] > target){
                high--;
            }else{
                low++;
            }
        }

        return v;
    }
};