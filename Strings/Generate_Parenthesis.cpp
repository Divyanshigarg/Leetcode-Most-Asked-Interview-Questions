Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]


class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        generate(ans,"",n,n);
        
        return ans;
    }
    
    void generate(vector<string> &ans,string s,int open,int close)
    {
        if(open == 0 && close == 0)
        {
            ans.push_back(s);
            return ;
        }
        
        if(open > 0)
        {
            generate(ans,s+'(',open-1,close);
        }
        
        if(open < close)
        {
            generate(ans,s+')',open,close-1);
        }
    }
};
problem link:
https://leetcode.com/problems/generate-parentheses/
