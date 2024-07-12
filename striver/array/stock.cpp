#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int> &v);
int main(){
    vector<int> v = {7, 1, 5, 3, 6, 4};
    int ans = maxProfit(v);
    cout<<ans<<endl;
    return 0;
}

// max profit by max - min
// max-day > min-day as buy before sell
// from min point we are seeing max 
int maxProfit(vector<int> &v){
    int mini = v[0], maxProfit = 0;
    for(int i=1; i<v.size(); i++){
        maxProfit = max(maxProfit, v[i] - mini);
        mini = min(v[i], mini);
    }
    return maxProfit;
}