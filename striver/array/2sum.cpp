#include<iostream>
#include<unordered_map>
#include<map>
#include<vector>
using namespace std;
pair<int, int> twoSum(vector<int> &v, int k);
int main(){

    // it is not neccessay to be sorted
    vector<int> v = {1,2,3,4,5};
    int sum = 8;
    pair<int, int> ans = twoSum(v, sum);
    cout<<ans.first<<" "<<ans.second<<endl;
    return 0;
}


// nice question
// hashing is done
// storing value with index
pair<int, int> twoSum(vector<int> &v, int k){

    unordered_map<int, int> m;
    // when sum is not found
    pair<int, int> p = {-1, -1};
    for(int i=0; i<v.size(); i++){
        int x = k - v[i];
        
        if(m.find(x)!=m.end()){
            p = {i, m[x]};
        }

        m[v[i]] = i;
    }
    return p;
}