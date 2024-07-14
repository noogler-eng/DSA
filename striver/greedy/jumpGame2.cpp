// jumpgame-2 -> here we have to find the minimum no of jumps
// there is no 0 in array
#include<iostream>
#include<vector>
using namespace std;
int miniJump(vector<int> &v);
int main(){
    vector<int> v = {2, 3, 1, 4, 1, 1, 1, 2};
    int ans = miniJump(v);
    cout<<ans<<endl;
    return 0;
}

int miniJump(vector<int> &v){
    int l = 0, r = 0, miniJump=0, maxi=0;
    while(r < v.size()){
        for(int i=l; i <= r; i++){
            maxi = max(v[i], maxi);
        }
        l = r;  
        r = maxi+l;
        miniJump++;
    }
    return miniJump;
}