// 5. array is given with same and distinct numbers in which we have to find top fre k numbers


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> getKFreq(vector<int> &v, int k){
    int n = v.size();
    vector<int> ans;
    
    // setting up hashmap
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[v[i]]++;
    }

    // setting up the min heap of pair
    priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int, int>>> s;
    for(auto i: m){
        s.push({i.second, i.first});
        if(s.size() > k){
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
    vector<int> v{1, 1, 1, 3, 2, 2 ,4};
    int k = 2;
    vector<int> ans = getKFreq(v, k);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}