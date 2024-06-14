// 4. finding the k closet number from an array of an given number k;

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> kClosetElement(vector<int> &v, int k){
    int n = v.size();
    vector<int> ans;

    // closet means minimum means max-heap
    priority_queue<pair<int, int>> s;
    // using hashmap for key, value
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[v[i]] = abs(v[i] - k);
    }

    int count = 0;
    for(auto i: m){
        // sort on behalf of closet - second part of pair, so writeen first 
        s.push({i.second, i.first});
        count++;
        if(count > k){
            s.pop();
        }
    }

    while(!s.empty()){
        int x = s.top().second;
        ans.push_back(x);
        s.pop();
    }

    return ans;
}

int main(){
    vector<int> v{5, 6, 7, 8, 9};
    int k = 3;
    vector<int> ans = kClosetElement(v, k);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
