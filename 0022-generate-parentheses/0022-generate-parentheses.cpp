class Solution {
private: 
    void solve(vector<string> &ans, string posans,int open,int close, int n){
        if(posans.length()==2*n){
            ans.push_back(posans);
            return;
        }
        
        if(open<n)solve(ans, posans+"(",open +1, close, n);
        if(close<open)solve(ans, posans+")",open, close+1, n);
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string posans;
        solve(ans, posans,0, 0, n);
        return ans;
    }
};