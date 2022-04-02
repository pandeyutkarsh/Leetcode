class Solution {
public:
    
void helper(vector<char> &s,int i){
    int n = s.size();
    if(i>=s.size()/2){
        return;
    }

    swap(s[i],s[n-i-1]);
    helper(s,i+1);
}

    
    void reverseString(vector<char>& s) {
        // solve(s,0,s.size()-1);
        int i = 0 , j = s.size()-1;
    
        helper(s,i);
    }
};
