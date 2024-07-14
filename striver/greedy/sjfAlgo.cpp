// scheduling algorithm that selects the waiting process
// sorting the array in the lower to higher
#include<iostream>
#include<vector>
using namespace std;
// average time = total waiting time / size;
int averageTime(vector<int> &v);
int main(){
    vector<int> v = {4, 3, 7, 1, 2};
    int ans = averageTime(v);
    cout<<ans<<endl;
    return 0;
}

int averageTime(vector<int> &v){

    int totalWaitingTime = 0;
    int totalTime = 0;
    sort(v.begin(), v.end());

    int i=0;
    while(i<v.size()){
        totalWaitingTime += totalTime;
        totalTime += v[i];
        i++;
    }

    return totalWaitingTime / v.size();
}

// time complexity o(nlogn) + o(n)
// space complexity o(n)