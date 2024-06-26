// 2. k largest element in an array in vector
// input -> arr {7, 10,4, 3, 20, 15}, k = 3
// output -> {10, 15,20}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> kLargestArray(vector<int> &v, int k){
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> s;
    int n = v.size();

    for(int i=0; i<n; i++){
        s.push(v[i]);
        if(s.size() > k){
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
    vector<int>v{7, 10,4, 3, 20, 15};
    int k = 3;
    vector<int> ans = kLargestArray(v, k);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}