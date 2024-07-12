// union of two sorted array
#include<iostream>
#include<vector>
using namespace std;
vector<int> unionTwoArray(vector<int> &v1, vector<int> &v2);
int main(){
    vector<int> v1 = {1, 1, 2, 3, 4, 5};
    vector<int> v2 = {2, 3, 4, 4, 5};
    vector<int> ans = unionTwoArray(v1, v2);

    for(auto i: ans){
        cout<<i<<" "<<endl;
    }
    return 0;
}

// brute force is pushing each and every element to sets
// optimal is to check each element
vector<int> unionTwoArray(vector<int> &v1, vector<int> &v2){
    vector<int> ans;

    int i1 = 0, i2 = 0, prev = -1;
    while(i1 < v1.size() && i2 < v2.size()){
        if(v1[i1] < v2[i2]){
            if(prev!=v1[i1]){
                prev = v1[i1];
                ans.push_back(v1[i1]);
                i1++;
            }else{
                i1++;
            }
        }else if(v1[i1] > v2[i2]){
            if(prev!=v2[i2]){
                prev = v2[i2];
                ans.push_back(v2[i2]);
                i2++;
            }else{
                i2++;
            }
        }else{
            if(prev!=v2[i2]){
                prev = v2[i2];
                ans.push_back(v2[i2]);
                i2++;
                i1++;
            }else{
                i1++;
                i2++;
            }
        }
    }

    while(i1 < v1.size()){
        if(prev != v1[i1]){
            prev = v1[i1];
            ans.push_back(v1[i1]);
            i1++;
        }else{
            i1++;
        }
    }

    while(i2 < v2.size()){
        if(prev != v2[i2]){
            prev = v2[i2];
            ans.push_back(v2[i2]);
            i2++;
        }else{
            i2++;
        }
    }

    return ans;
}

