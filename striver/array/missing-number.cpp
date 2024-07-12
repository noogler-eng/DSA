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

    int sum=0;
    for(int i=0; i<v.size(); i++){
        sum = sum + v[i];
    }

    int misssingNum = ((n*(n+1)/2) - sum);
    return misssingNum;
}