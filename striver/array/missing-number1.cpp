// findig the missing number from given unsoted array
#include<iostream>
#include<vector>
using namespace std;
int missingNumber(vector<int> &v, int n);
int main(){
    vector<int> v = {1,2,3,5};
    int n = 5;
    int ans = missingNumber(v, n);
    cout<<ans<<endl;
    return 0;
}

int missingNumber(vector<int> &v, int n){
    int ans = v[0];
    for(int i=1; i<v.size(); i++){
        ans = ans ^ v[i] ^ i;
    }

    ans = ans ^ (n-1) ^ (n);
    return ans;
}