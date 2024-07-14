// time complexity is o(nlogn)*2 + o(n)
// space complexity is o(1)
// assigning cookies 
#include<iostream>
#include<vector>
using namespace std;
int assignCookies(vector<int> &greedFactor, vector<int> &cookies);
int main(){
    vector<int> greedFactor = {1, 5, 3, 3, 4};
    vector<int> cookiesSize = {4, 2, 1, 2, 1, 3};

    int ans = assignCookies(greedFactor, cookiesSize);
    cout<<ans<<endl;
    return 0;
}

// 1. sort both the cokkies and greedFactor array
// 2. assignin cookies from minimum and if greed is more then moving forward in cookies
int assignCookies(vector<int> &greedFactor, vector<int> &cookies){
    
    sort(greedFactor.begin(), greedFactor.end());
    sort(cookies.begin(), cookies.end());
    
    int count = 0;
    int i=0, j=0;
    while(i < greedFactor.size() && j < cookies.size()){
        if(greedFactor[i] <= cookies[j]){
            count += cookies[j];
            i++;
            j++;
        }else{
            j++;
        }
    }
    return count;
}