#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int kthSmallestElement(vector<int> &v, int k){
    int n = v.size();
    priority_queue<int> s;
    
    for(int i=0; i<n; i++){
        s.push(v[i]);
        if(s.size() > k){
            s.pop();
        }
    }

    return s.top();
}


int main(){
    vector<int>v{7, 10,4, 3, 20, 15};
    int k = 3;
    int ans = kthSmallestElement(v, k);
    cout<<ans<<endl;
    return 0;
}