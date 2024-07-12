#include<iostream>
#include<vector>
using namespace std;
vector<int> rotateByD(vector<int> &v, int d);
int main(){
    vector<int> v = {0,1,2,3,4};
    vector<int> ans(v.size());
    ans = rotateByD(v, 2);

    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}

// rotate an array by d it is done in circular way
vector<int> rotateByD(vector<int> &v, int d){
    int n = v.size();
    d = d % n;
    
    vector<int> ans(n);
    for(int i=0; i<n; i++){
        ans[(n+i-d)%n] = v[i];
    }
    return ans;
}
