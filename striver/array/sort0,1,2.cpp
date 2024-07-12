// sort an array as 0's then 1's then 2's
#include<iostream>
#include<vector>
using namespace std;
void sorting(vector<int> &v);
int main(){
    vector<int> v = {1, 1, 0, 0, 2, 1, 0, 2, 2, 0};
    sorting(v);

    for(auto i: v){
        cout<<i<<" ";
    } 
    return 0;
}

// not moving forward mid until it's value at index is 1
// 3 pointer problem so known as dutch national flag
void sorting(vector<int> &v){
    int low = 0, mid = 0, high = v.size()-1;
    while(mid <= high){
        if(v[mid] == 0){
            swap(v[mid], v[low]);
            low++;
        }else if(v[mid] == 1){
            mid++;
        }else{
            swap(v[mid], v[high]);
            high--;
        }
    }
}