#include<iostream>
#include<vector>
using namespace std;
vector<int> getLeadersList(vector<int> &v);
void reverse(vector<int> &v);
int main(){
    vector<int> v = {10, 22, 12, 3, 0, 6};
    vector<int> ans = getLeadersList(v);
    for(auto i: ans){
        cout<<i<<" ";
    }

    // ans = {6, 12, 22};
    // if ans in reverse order requirement then 
    reverse(ans);
    cout<<endl;
    for(auto i: ans){
        cout<<i<<" ";
    }

    return 0;
}

void reverse(vector<int> &v){
    int left = 0;
    int right = v.size()-1;
    while(left <= right){
        swap(v[left], v[right]);
        left++;
        right--;
    }
}

vector<int> getLeadersList(vector<int> &v){
    vector<int> ans;
    int maxFromR = 0;
    for(int i=v.size()-1; i>=0; i--){
        if(v[i] > maxFromR){
            ans.push_back(v[i]);
            maxFromR = max(maxFromR, v[i]);
        }
    }

    return ans;
}