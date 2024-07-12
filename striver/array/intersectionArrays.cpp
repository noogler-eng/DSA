// intersection of two sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> intersectionTwoArray(vector<int> &v1, vector<int> &v2);
int main(){
    vector<int> v1 = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 9};
    vector<int> v2 = {2, 3, 4, 4, 5};
    vector<int> ans = intersectionTwoArray(v1, v2);

    for(auto i: ans){
        cout<<i<<" ";
    }
    return 0;
}

// here duplicates elemets are allowed
vector<int> intersectionTwoArray(vector<int> &v1, vector<int> &v2){
    vector<int> ans;

    int i1 = 0, i2 = 0;
    while(i1 < v1.size() && i2 < v2.size()){
        if(v1[i1] < v2[i2]){
            i1++;
        }else if(v1[i1] > v2[i2]){
            i2++;
        }else{
            ans.push_back(v2[i2]);
            i2++;
            i1++;
        }
    }

    return ans;
}

