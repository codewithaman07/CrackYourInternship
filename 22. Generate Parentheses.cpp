class Solution {
public:
    void solve(int n, int i, int j, string &temp, vector<string>&ans){
        if(temp.size() == 2*n){
            ans.push_back(temp);
            return;
        }
        if(i<n){
            temp.push_back('(');
            solve(n,i+1,j,temp,ans);
            temp.pop_back();
        }
        if(j<i){
            temp.push_back(')');
            solve(n,i,j+1,temp,ans);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp = "";
        int i = 0, j = 0;
        solve(n,i,j,temp,ans);
        return ans;  
    }
};
