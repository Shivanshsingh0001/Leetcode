class Solution {
public:
    int maxPower(string s) {
        int max_con=1;
        int con=1;
        int j=0;
        for(int i=1;i<s.length();i++){
            if(s[j]==s[i]){
                con++;
                j++;
            }
            else{
                j=i;
                con=1;
            }
            max_con=max(con,max_con);
        }
        return max_con;
    }
};