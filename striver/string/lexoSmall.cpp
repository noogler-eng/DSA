class Solution {
public:
    string getSmallestString(string s) {
        
        for(int i=0; i<s.length()-1; i++){
            if((s[i]-'0')%2 == (s[i+1]-'0')%2){
                if(s[i+1] < s[i]){
                    swap(s[i+1], s[i]);
                    break;
                }else{
                    continue;
                }
            }
        }
        return s;
    }
};