#include<iostream>
#include<vector>
using namespace std;
void rotateByOne(vector<int> &v);
int main(){
    vector<int> v = {1,2,3,4,5};
    rotateByOne(v);

    for(auto i: v){
        cout<<i<<" ";
    }
    return 0;
}

// brute force making an temp variable to store first one and again 
// set it in array
void rotateByOne(vector<int> &v){
    int temp = v[0], i;
    for(i=1; i<v.size(); i++){
        v[i-1] = v[i];
    }
    v[i-1] = temp;
}
