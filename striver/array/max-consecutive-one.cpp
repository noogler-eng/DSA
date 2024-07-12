// max-consecutive-ones
#include<iostream>
#include<vector>
using namespace std;
int maxConsecutiveOne(vector<int> &v);
int main(){
    vector<int> v = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int ans = maxConsecutiveOne(v);
    cout<<ans<<endl;
    return 0;
}

int maxConsecutiveOne(vector<int> &v){
    int count = 0, maxi = 0;
    for(int i=0; i<v.size(); i++){
        if(v[i] == 0) {
            count = 0;
            continue;
        }
        count++;
        maxi = max(maxi, count);
    }
    return maxi;
}