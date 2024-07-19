#include<iostream>
#include<vector>
using namespace std;
void spiralTraversal(vector<int,vector<int>> &v);
int main(){
    vector<int, vector<int>> v = {{}, {}, {}, {}};
    spiralTraversal(v);
    return 0;
}

void spiralTraversal(vector<int, vector<int>> &v){
    int left = 0;
    int right = (v[0].size()) - 1;
    int top = 0;
    int bottom = v.size()-1;

    while(left < right && right<bottom){

    }

}
