// jumping from an index to another index until reach
#include<iostream>
#include<vector>
using namespace std;
bool jumpGame(vector<int> &v);
int main(){
    vector<int> v = {2, 3, 1, 0, 4};
    bool ans = jumpGame(v);
    cout<<ans<<endl;
    return 0;
}

bool jumpGame(vector<int> &v){
    
    // if array not contains any 0 then it always be travels
    // if we are not able to move forward then it must be beacus of 0 so i++ increases
    int maxIndex = 0;
    for(int i=0; i<v.size(); i++){
        if( i > maxIndex ) return false;
        maxIndex = max(maxIndex, i+v[i]);
    }
    return true;
}