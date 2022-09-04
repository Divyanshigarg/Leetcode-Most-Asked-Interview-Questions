/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings. */


class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int n=strs.size();
        
        if(n==0 )
            return "";
        
        string res;
        sort(strs.begin(),strs.end());
        //after sorting string a shows first string and b shows last string
        string a=strs[0];
        string b=strs[n-1];
        
        for(int i=0;i<a.size();i++)
        {
            //comparing the letters of the strings
            if(a[i]==b[i])
            {
                res+=a[i];
            }
            else break;
        }
        return res;
    }
};

problem link:
https://leetcode.com/problems/longest-common-prefix/

