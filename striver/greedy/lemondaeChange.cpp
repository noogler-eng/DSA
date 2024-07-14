// lemonadeChange 
// here return true if changes are possible, if not then return false
#include<iostream>
#include<vector>
using namespace std;
bool lemonadeChange(vector<int> &v);
int main(){
    vector<int> v = {5, 5, 5, 5, 10 ,20};
    bool ans = lemonadeChange(v);
    cout<<ans<<" ";
    return 0;
}

bool lemonadeChange(vector<int> &v){

    sort(v.begin(), v.end());
    int count5 = 0, count10 = 0;

    for(int i=0;i< v.size(); i++){
        if(v[i] == 5){
            count5++;
        }else if (v[i] == 10){
            if(count5 > 0){
                count5--;
                count10++;
            }else{
                return false;
            }
        }else {
            // first remove 10 then remove 5;
            if(count5 >= 1 && count10 >= 1){
                count10--;
                count5--;
            } else if(count5 >= 3){
                count5-=3;
            }else{
                return false;
            }
        }
        i++;
    }

    return true;
}