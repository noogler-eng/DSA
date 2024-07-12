#include<iostream>
#include<vector>
using namespace std;
vector<int>  removeDuplicate(vector<int> &v);
int main(){
    vector<int> v = {1, 1, 1, 2, 2, 3, 5, 5, 5, 5, 7};
    vector<int> ans = removeDuplicate(v);
    
    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}

vector<int> removeDuplicate(vector<int> &v){
    vector<int> ans;
    int prev = -1;
    for(int i=0; i<v.size(); i++){
        if(v[i] != prev){
            prev = v[i];
            ans.push_back(v[i]);
        }
    }

    return ans;
}