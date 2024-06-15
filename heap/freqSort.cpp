// 6. frequency sorting of an array using heap

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> freqSort(vector<int> &v){
    int n = v.size();
    vector<int> ans;

    // setting up hashmap
    unordered_map<int, int> m;
    for(int i=0; i<n; i++){
        m[v[i]]++;
    }

    // setting up the heap which is max on the basis of freq
    priority_queue<pair<int, int>> s;
    for(auto i: m){
        s.push({i.second, i.first});
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
    vector<int> ans = freqSort(v);
    for(auto i: ans){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;

}