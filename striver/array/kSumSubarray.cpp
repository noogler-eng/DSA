// constraint all values are postivie in an list
#include<iostream>
#include<vector>
using namespace std;
int longestSubarrayWithSumK(vector<int> &v, int k);
int main(){

    vector<int> v = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int k = 5;
    int ans = longestSubarrayWithSumK(v, k);
    cout<<ans<<endl;
    return 0;
}

// moving sliding window in right side direction
int longestSubarrayWithSumK(vector<int> &v, int k){
    int maxLength = 0;
    int sum = 0, left = 0, right = 0;
    while(right<v.size()){
        sum+=v[right];
        if(sum == k) maxLength = max(maxLength, right-left+1);

        while(sum > k){
            sum-=v[left];
            left++;
        }

        right++;
    }
    return maxLength;
}

