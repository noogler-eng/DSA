// 3. sort a k sorted array
// array is given where in next k the element is given for actual position
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> getSortedArray(vector<int> &v, int k){
    int n = v.size();
    vector<int> ans;
    // here we are taking min heap
    priority_queue<int, vector<int>, greater<int>> s;

    for(int i=0; i<n; i++){
        s.push(v[i]);
        if(s.size() > k){
            int x = s.top();
            ans.push_back(x);
            s.pop();
        }
    }

    while(!s.empty()){
        int x = s.top();
        ans.push_back(x);
        s.pop();
    }

    return ans;
}
int main(){
    vector<int> v{6, 5, 3, 2, 8, 10, 9};
    int k = 3;
    vector<int> ans = getSortedArray(v, k);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}