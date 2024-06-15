// 7. 2d vector of points with thier coordinates is given we have to find the k closet points
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> kcloset(vector<pair<int, int>> &v, int k){
    int n = v.size();
    map<pair<int, int>, int> m;
    vector<pair<int, int>> ans;

    // setting up the map
    for(int i=0; i<n; i++){
        int x = v[i].first;
        int y = v[i].second;
        m[{x, y}] = (x*x) + (y*y);
    }

    // setting up the heap with max as distance will be first part
    priority_queue<pair<int, pair<int, int>>> s;
    for(auto i: m){
        s.push({i.second, {i.first.first, i.first.second}});
        if(s.size() > k){
            s.pop();
        }
    }

    while(!s.empty()){
        int x = s.top().second.first;
        int y = s.top().second.second;
        ans.push_back({x, y});
        s.pop();
    }

    return ans;

}

int main(){
    vector<pair<int, int>> v{{1, 3}, {-2, 2}, {5, 8}, {0, 1}};
    int k = 2;
    vector<pair<int, int>> ans = kcloset(v,k);
    for(auto i: ans){
        cout<<"( "<<i.first<<","<<i.second<<" )"<<endl;
    }
    return 0;
}