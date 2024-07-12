// getting the number which appears only once
#include<iostream>
#include<vector>
using namespace std;
int getOnceNumber(vector<int> &v);
int main(){
    vector<int> v = {1, 1, 2, 2, 3, 5, 5, 4, 4};
    int ans = getOnceNumber(v);
    cout<<ans<<endl;
    return 0;
}

// taking xor of each number
// a ^ a = 0
// a ^ 0 = a
int getOnceNumber(vector<int> &v){
    int ans = v[0];
    for(int i=1; i<v.size(); i++){
        ans = ans ^ v[i];
    }
    return ans;
}