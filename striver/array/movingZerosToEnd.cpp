#include<iostream>
#include<vector>
using namespace std;
void moveToEnd(vector<int> &v);
int main(){
    vector<int> v = {1, 1, 0, 3, 4, 0, 2, 9, 5, 0, 0, 0, 3, 0};
    moveToEnd(v);

    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}

// moving all the zeroes to end 
// 2 pointers apprach
void moveToEnd(vector<int> &v){
    int n = v.size();
    int i = 0;
    int j = 0;

    while(i < n){
        if(v[i] != 0){
            swap(v[i], v[j]);
            i++;
            j++;
        }else{
            i++;
        }
    }
}